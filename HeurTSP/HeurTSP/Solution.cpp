//
//  Solution.cpp
//  HeurTSP
//
//  Created by Oscar Alejandro Hernández López on 06/12/20.
//

#include "Solution.hpp"

Solution::Solution(TSP *I): vector<long>(){
    _data=I;
    _fitness=INFINITY;
}

Solution::Solution(Solution *S): vector<long>(){
    _data=S->getInstance();
    _fitness=S->getfitness();
}
