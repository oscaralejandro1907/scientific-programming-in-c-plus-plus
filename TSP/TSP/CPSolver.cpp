//
//  CPSolver.cpp
//  TSP
//
//  Created by Vincent on 4/12/19.
//

#include "CPSolver.hpp"

CPSolver::CPSolver(Instance *Inst) : Solver(Inst, "CPSolver"){
    _model=IloModel(_env);
    _cplex=IloCplex(_model);
    _obj=IloAdd(_model, IloMinimize(_env,0));
    
    //Variables x
    _x=IloArray< IloNumVarArray >(_env,_Inst->nnodes()+1);
    for(long i=0;i<_Inst->nnodes()+1;i++){
        _x[i]=IloNumVarArray(_env);
        for(long j=0;j<_Inst->nnodes()+1;++j){
            ostringstream label;
            label<<"x_"<<i<<"_"<<j;
            _x[i].add( IloNumVar(_env, 0, 1, ILOINT, label.str().c_str()) );
        }
    }
    
    //Variables u
    _u=IloNumVarArray(_env);
    for(long i=0;i<_Inst->nnodes()+1;i++){
        ostringstream label;
        label<<"u_"<<i;
        _u.add( IloNumVar(_env, 1, _Inst->nnodes()+1, ILOINT, label.str().c_str()) );
    }
    _u[0].setUB(1);
    
    //Objective
    IloExpr objexpr(_env);
    for(long i=0;i<_Inst->nnodes();i++){
        for(long j=1;j<_Inst->nnodes()+1;++j) if(i!=j){
            objexpr+=_Inst->distance(i, j%_Inst->nnodes())*_x[i][j];
        }
        //objexpr+=_Inst->distance(i, 0)*_x[i][_Inst->nnodes()];
    }
    _obj.setExpr(objexpr);
    //objexpr.end();
    
    //Constraints
    _Constraints=IloRangeArray(_env);
    
    //Constraints C1
    for(long i=0; i<_Inst->nnodes();++i){
        ostringstream label;
        label<<"C1_"<<i;
        
        IloExpr expr(_env);
        for(long j=1;j<_Inst->nnodes()+1;++j) if(i!=j)
            expr+=_x[i][j];
        
        _Constraints.add( IloRange(_env, 1, expr, 1, label.str().c_str()) );
        
    }
    
    //Constraints C2
    for(long i=1; i<_Inst->nnodes()+1;++i){
        ostringstream label;
        label<<"C2_"<<i;
        
        IloExpr expr(_env);
        for(long j=0;j<_Inst->nnodes();++j) if(i!=j)
            expr+=_x[j][i];
        
        _Constraints.add( IloRange(_env, 1, expr, 1, label.str().c_str()) );
        
    }
    
    //Constraints U
    for(long i=0; i<_Inst->nnodes();++i){
        for(long j=1;j<_Inst->nnodes()+1;++j) if(i!=j){
            ostringstream label;
            label<<"U_"<<i<<"_"<<j;
            
            IloExpr expr(_env);
            
            expr=_u[i]-_u[j]+1-_Inst->nnodes()*(1-_x[i][j]);
            
            _Constraints.add( IloRange(_env, -IloInfinity, expr, 0, label.str().c_str()) );
        }
    }
    
    _model.add(_Constraints);
    //Export Model
    _cplex.exportModel("Model.lp");
    
    
    
    
}





Solution* CPSolver::solve(Solution *Sinit){

    if(Sinit!=NULL){
        IloNumVarArray Var(_env);
        IloNumArray Val(_env);
        
        
//        long i=Sinit->front();
//        for(long j : *Sinit) if(i!=j){
//            Var.add(_x[i][j]);
//            Val.add(1);
//            i=j;
//        }
        
        int k=1;
        for(long i : *Sinit){
            Var.add(_u[i]);
            Val.add(k);
            k++;
        }
        
        _cplex.addMIPStart(Var,Val,IloCplex::MIPStartRepair);
    }

    _cplex.setParam(IloCplex::TiLim, _TimLim);
    _cplex.setParam(IloCplex::EpGap, _Gap);
    
    Solution *S=NULL;
    
    _cplex.solve();
    
    IloAlgorithm::Status status=_cplex.getStatus();
    cout<<"Best Objective: "<<_cplex.getObjValue()<<endl;
    cout<<"Cplex Status: "<<_cplex.getStatus()<<endl;
    if(status==IloAlgorithm::Feasible ){
        
        S=new Solution(_Inst);
        
        long i=0;
        while(i!=_Inst->nnodes()){
            S->push_back(i);
            for(long j=1;j<_Inst->nnodes()+1;++j) if(i!=j){
                if(_cplex.getValue(_x[i][j])>0.5){
                    i=j;
                    break;
                }
            }
        }
        S->computefitness();

        
    }
    else if(Sinit!=NULL){
        S=new Solution(Sinit);
    }
    
    return S;
    
//    cout<<"Cplex Status: "<<_cplex.getStatus()<<endl;
//    cout<<"Best Objective: "<<_cplex.getObjValue()<<endl;
//    cout<<"Optimality Gap: "<<_cplex.getMIPRelativeGap()<<endl;
//
//    long i=0;
//    double obj=0;
//    while(i!=_Inst->nnodes()){
//        cout<<setw(5)<<i;
//        for(long j=1;j<_Inst->nnodes()+1;++j) if(i!=j){
//            if(_cplex.getValue(_x[i][j])>0.5){
//                obj+=_Inst->distance(i, j%_Inst->nnodes());
//                i=j;
//                break;
//            }
//        }
//    }
//    cout<<endl;
//    cout<<"Computed Obj: "<<obj<<endl;
    
    
}

