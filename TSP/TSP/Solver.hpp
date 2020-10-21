//
//  Solver.hpp
//  TSP
//
//  Created by Vincent on 4/12/19.
//

#ifndef Solver_hpp
#define Solver_hpp

#include "Header.hpp"
#include "Solution.hpp"

typedef int param_t;

class Solver{
protected:
    
    string _SolverName;
    
    Instance *_Inst;
    
    double _TimLim;
    double _Gap;
    
    
public:
    //parameters
    static const param_t TimLim;
    static const param_t Gap;
    
    Solver(Instance *Inst, string Name){
        _Inst=Inst;
        _SolverName=Name;
        _TimLim=3600;
        _Gap=0.01;
    }
    
    virtual ~Solver(){}
    
    string SolverName() {return _SolverName;}
    
    void setParam(param_t param, double val){
        if(param==TimLim) _TimLim=val;
        else if(param==Gap) _Gap=val;
    }
    
    virtual Solution* solve(Solution* S=NULL)=0;
    
    
    
};



#endif /* Solver_hpp */
