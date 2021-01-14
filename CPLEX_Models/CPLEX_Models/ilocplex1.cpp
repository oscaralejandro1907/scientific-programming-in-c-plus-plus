//
//  ilocplex1.cpp
//  CPLEX_Models
//
//  Created by Oscar Alejandro Hernández López on 12/01/21.
//

#include "ilocplex1.hpp"

#include "Header.h"

/*
 Maximize         x1    +    2x2    +    3x3    +       x4
 
 subject to    -  x1    +     x2    +     x3    +     10x4    ≤    20
                  x1    -    3x2    +     x3                  ≤    30
                              x2                -    3.5x4    =    0
 
 with these bounds         0    ≤    x1    ≤    40
                           0    ≤    x2    ≤    +∞
                           0    ≤    x3    ≤    +∞
                           2    ≤    x4    ≤    3
                                     x4    integer
 */

void cplexIP1(int argc, const char * argv[]) {
    
    IloEnv _env;
    IloCplex _cplexIP;
    IloModel _IP;
    IloObjective _objIP;
    IloNumVarArray _x;
    IloRangeArray _Constraints;
    
    _IP = IloModel(_env);
    _cplexIP = IloCplex(_IP);
    _objIP = IloAdd(_IP, IloMaximize(_env,0));
    
    _Constraints = IloRangeArray(_env);

    
    //Variables x
    _x=IloNumVarArray(_env);
    
        //Bounds of x variables
    _x.add(IloNumVar(_env,0.0, 40.0));
    _x.add(IloNumVar(_env));
    _x.add(IloNumVar(_env));
    _x.add(IloNumVar(_env, 2.0, 3.0, ILOINT));
    
    //Objective
    IloExpr z(_env);
    z = _x[0] + 2*_x[1] + 3*_x[2] + _x[3];
    _objIP.setExpr(z);
    
    z.end();

    //Constraints
    IloExpr expr1(_env);
    expr1 = -_x[0] + _x[1] + _x[2] + 10*_x[3];
    _Constraints.add(IloRange(_env,-IloInfinity, expr1, 20));
    expr1.end();

    IloExpr expr2(_env);
    expr2 = _x[0] - 3*_x[1] + _x[2];
    _Constraints.add(IloRange(_env,-IloInfinity,expr2,30));
    expr2.end();

    IloExpr expr3(_env);
    expr3 = _x[1] - 3.5*_x[3];
    _Constraints.add(IloRange(_env,0,expr3,0));
    expr3.end();
        
    _IP.add(_Constraints);  //Add Constraints to the Model
    
    //Solver Results
      
    _cplexIP.exportModel("model.lp"); //Export Model to an external file
    
    _cplexIP.solve(); //Solve the Cplex Model
    
    
    _env.out() << "Solution status = " << _cplexIP.getStatus() << endl; //Show in console if the status of a solution is optimal
    _env.out() << "Solution value  = " << _cplexIP.getObjValue() << endl;  //Print in console the objective value
    
    //Get the value of variables
    IloNumArray vals(_env);
    
    _cplexIP.getValues(vals, _x);
    _env.out() << "Values        = " << vals << endl;
    
    _cplexIP.getSlacks(vals, _Constraints);
    _env.out() << "Slacks        = " << vals << endl;
        
}
