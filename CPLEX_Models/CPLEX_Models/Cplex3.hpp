//
//  Cplex3.hpp
//  CPLEX_Models
//
//  Created by Oscar Alejandro Hernández López on 13/01/21.
//

#ifndef Cplex3_hpp
#define Cplex3_hpp

#include <stdio.h>
#include "Header.h"

//Exercise 40 Cien Problemas

class InstanceProblem {
    
    int _nvariables;
    int _minsperday;
    vector <int> _satisfaction;
    vector <int> _activitytimes;
    
public:
    InstanceProblem();
    
    int getNvariables(){return _nvariables;}
    int getMinsPerDay(){return _minsperday;}
    vector<int> getSatisfaction(){return _satisfaction;}
    vector<int> getActivityTime(){return _activitytimes;}
};

class CplexProblem {
    IloEnv _env;
    
    IloModel _IP;
    IloCplex _cplexIP;
    IloObjective _objIP;
    
    IloNumVarArray _x;
    IloRangeArray _Constraints;
    
public:
    CplexProblem(InstanceProblem *data);
};

#endif /* Cplex3_hpp */
