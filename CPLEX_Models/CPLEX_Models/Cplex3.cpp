//
//  Cplex3.cpp
//  CPLEX_Models
//
//  Created by Oscar Alejandro Hernández López on 13/01/21.
//

#include "Cplex3.hpp"

InstanceProblem::InstanceProblem(){
    _nvariables = 6;
    _minsperday = 1440;
    
    _satisfaction = {4,2,7,3,2,4};
    _activitytimes = {15,10,120,60,300,60};
}

CplexProblem::CplexProblem(InstanceProblem *data){

    _IP = IloModel(_env);
    _cplexIP = IloCplex(_IP);
    _objIP = IloAdd(_IP, IloMaximize(_env,0));
    
    _Constraints = IloRangeArray(_env);
    
    _x=IloNumVarArray(_env);
    
    for (int i=0; i<data->getNvariables(); i++) {
        _x.add(IloNumVar(_env));
    }

    IloExpr z(_env);
    for (int a=0; a<data->getNvariables(); a++) {
        z+=data->getSatisfaction()[a]*_x[a];
    }
    _objIP.setExpr(z);

    z.end();


    IloExpr expr(_env);
    for (int i=0; i<data->getNvariables(); i++) {
        expr+=data->getActivityTime()[i]*_x[i];
    }

    _Constraints.add(IloRange(_env,-IloInfinity,expr,data->getMinsPerDay()));

    IloExpr beer(_env);
    beer = _x[0];
    _Constraints.add(IloRange(_env,-IloInfinity,beer,5));

    IloExpr cigar(_env);
    cigar = _x[1];
    _Constraints.add(IloRange(_env,-IloInfinity,cigar,5));

    IloExpr soccer(_env);
    soccer = _x[2];
    _Constraints.add(IloRange(_env,-IloInfinity,soccer,2));

    IloExpr walk(_env);
    walk = _x[3];
    _Constraints.add(IloRange(_env,-IloInfinity,beer,2));

    IloExpr book(_env);
    book = _x[4];
    _Constraints.add(IloRange(_env,-IloInfinity,book,2));

    IloExpr sleep1(_env);
    sleep1 = _x[5];
    _Constraints.add(IloRange(_env,-IloInfinity,sleep1,10));
    
    IloExpr sleep2(_env);
    sleep2 = _x[5];
    _Constraints.add(IloRange(_env,7,sleep2,IloInfinity));

    _IP.add(_Constraints);

    _cplexIP.exportModel("Model45.lp");
}


