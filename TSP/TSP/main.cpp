
#include "Header.hpp"
#include "Instance.hpp"
#include "CPSolver.hpp"

int main(int argc, char *argv[]){
    
    assert(argc==2);
    
    
    
    string FileName(argv[1]);
    cout<<FileName<<endl;
    
    Instance *Inst=new Instance(FileName);
    
    Solver *CP=new CPSolver(Inst);
    
    cout<<"Solver Name: "<<CP->SolverName()<<endl;
    
    CP->setParam(Solver::TimLim, 10);
    CP->setParam(Solver::Gap, 0.01);
    
    Solution* S=CP->solve();
    
    if(S!=NULL){
        S->print();
        assert(S->isFeasible());
        
        Solver *CP2=new CPSolver(Inst);
        Solution* S2=CP2->solve(S);
        if(S2!=NULL) delete S2;
        delete CP2;
    }
    
    if(S!=NULL) delete S;
    
    delete Inst;
    delete CP;
	
    return 0;
}



