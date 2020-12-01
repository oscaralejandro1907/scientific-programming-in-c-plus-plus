//
//  Cplex.hpp
//  cplex
//
//  Created by Oscar Alejandro Hernández López on 26/11/20.
//

#ifndef Cplex_hpp
#define Cplex_hpp

#include <ilconcert/iloenv.h>
#include <ilcplex/ilocplex.h>

class CplexModel {
private:
    IloEnv _env;
    IloModel _model;
    IloCplex _cplex;
    IloObjective _obj;
    
public:
    CplexModel();
    ~CplexModel(){};
    
};

#endif /* Cplex_hpp */
