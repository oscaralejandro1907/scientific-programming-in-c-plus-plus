//
//  CplexModel.hpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 03/01/21.
//

#ifndef CplexModel_hpp
#define CplexModel_hpp

#include "Header.h"
#include "Algorithm.hpp"

#include <stdio.h>

class CplexModel:public Algorithm{
    IloEnv _env;
    IloModel _IP;
    IloCplex _cplexIP;
    
    
    IloObjective _objIP;    //objective
    
    IloRangeArray _Constraints; //Constraints
    
    IloNumVarArray _x;  //variables
    
    
public:
    CplexModel(Knapsack *data);
};



#endif /* CplexModel_hpp */
