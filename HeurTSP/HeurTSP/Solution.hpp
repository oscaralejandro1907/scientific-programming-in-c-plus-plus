//
//  Solution.hpp
//  HeurTSP
//
//  Created by Oscar Alejandro Hernández López on 06/12/20.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <stdio.h>
#include "Header.h"
#include "InstanceTSP.hpp"

class Solution:vector<long>{
    double _fitness;
    TSP *_data;
    
public:
    Solution(TSP *I);
    Solution(Solution *S);
    
    TSP *getInstance(){return _data;}
    double getfitness(){return _fitness;}
    
    bool isFeasible();
};

#endif /* Solution_hpp */
