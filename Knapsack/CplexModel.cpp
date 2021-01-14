//
//  CplexModel.cpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 03/01/21.
//

#include "CplexModel.hpp"

CplexModel::CplexModel(Knapsack *data):Algorithm(data, "CplexModel"){
    _IP = IloModel(_env);
    _cplexIP = IloCplex(_IP);
    
    _objIP = IloAdd(_IP, IloMaximize(_env, 0));
    
    _Constraints = IloRangeArray(_env);
    
    _x=IloNumVarArray(_env);
    
}
