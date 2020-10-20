//
//  CPSolver.hpp
//  TSP
//
//  Created by Vincent on 4/12/19.
//

#ifndef CPSolver_hpp
#define CPSolver_hpp

#include "Solver.hpp"
#include <ilconcert/iloenv.h>
#include <ilcplex/ilocplex.h>

class CPSolver : public Solver{
private:
    IloEnv _env;
    IloModel _model;
    IloCplex _cplex;
    IloObjective _obj;
    
    IloArray< IloNumVarArray > _x;
    IloNumVarArray _u;
    
    IloRangeArray _Constraints;
    
    
    
public:
    
    CPSolver(Instance *);
    ~CPSolver(){}
    
    Solution* solve(Solution* );
    
    
};



#endif /* CPSolver_hpp */
