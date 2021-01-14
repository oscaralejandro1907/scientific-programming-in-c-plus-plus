//
//  Algorithm.hpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 03/01/21.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>

#include "Knapsack.hpp"

class Algorithm {
private:
    Knapsack *_data;
    string _AlgoName;
    
public:
    Algorithm(Knapsack *data, string AlgoName);
};

#endif /* Algorithm_hpp */
