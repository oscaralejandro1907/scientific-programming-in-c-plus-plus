//
//  ilocplex2.cpp
//  CPLEX_Models
//
//  Created by Oscar Alejandro Hernández López on 13/01/21.
//

#include "ilocplex2.hpp"

/*
 MAxZ = X1 + (3/2) X2
 
 2X1 + 2X2 ≤ 16    Restricción debida a las horas disponibles por semana de la MQ A

 X1 + 2X2 ≤ 12    Restricción debida a las horas disponibles por semana de la MQ B

 4X1 + 2X2 ≤ 28    Restricción debida a las horas disponibles por semana de la MQ C
 
 Xj ≥ 0 ;

 */
#include "Header.h"

void iLoCplex2(int argc, const char * argv[]) {
    
    //Declaring
    IloEnv _env;
    
    IloModel _IP;
    IloCplex _cplexIP;
    IloObjective _objIP;
    
    IloNumVarArray _x;
    IloRangeArray _Constraints;
    
    //Initialization
    _IP = IloModel(_env);
    _cplexIP = IloCplex(_IP);
    _objIP = IloAdd(_IP, IloMaximize(_env,0));
    
    _Constraints = IloRangeArray(_env);
    
        //Variables x
    _x=IloNumVarArray(_env);
    
    _x.add(IloNumVar(_env));
    _x.add(IloNumVar(_env));
    
    //Objective
    IloExpr Z(_env);
    Z = _x[0] + 1.5*_x[1];
    _objIP.setExpr(Z);
    
    Z.end();
    
    //Constraints
    IloExpr c1(_env);
    c1 = 2*_x[0] + 2*_x[1];
    _Constraints.add(IloRange(_env,-IloInfinity,c1,16));
    c1.end();
    
    IloExpr c2(_env);
    c2 = _x[0] + 2*_x[1];
    _Constraints.add(IloRange(_env,-IloInfinity,c2,12));
    c2.end();
    
    IloExpr c3(_env);
    c3 = 4*_x[0] + 2*_x[1];
    _Constraints.add(IloRange(_env,-IloInfinity,c3,28));
    
    _IP.add(_Constraints);
    
    _cplexIP.exportModel("model.lp");
    
    _cplexIP.solve();
    
    _env.out() <<"Solution status = " <<_cplexIP.getStatus()<<endl;
    
    _env.out() << "Solution value = "<<_cplexIP.getObjValue()<<endl;
    
    IloNumArray vals(_env);
    
    _cplexIP.getValues(vals, _x);
    _env.out() << "Vals = " << vals <<endl;
    
    _cplexIP.getSlacks(vals, _Constraints);
    _env.out() << "Slacks = " << vals << endl;
}
