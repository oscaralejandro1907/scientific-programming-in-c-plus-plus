//
//  Solution.cpp
//  TSP
//
//  Created by Vincent on 7/5/19.
//

#include "Solution.hpp"


Solution::Solution(Instance *I) : list<long>(){
    _Inst=I;
    _fitness=INFINITY;
}

Solution::Solution(Solution *S) : list<long>(*S){
    _Inst=S->instance();
    _fitness=S->fitness();
}

double Solution::computefitness(){
    _fitness=INFINITY;
    if(size()!=_Inst->nnodes()) return _fitness;
    
    _fitness=_Inst->distance(back(), front());
    long i=front();
    for(long j : *this){
        _fitness+=_Inst->distance(i, j);
        i=j;
    }
    
//    auto it=begin();
//    auto itnext=begin();
//    while(itnext++!=end()){
//        _fitness+=_Inst->distance(*it,*itnext);
//        it++;
//    }
    
    
    return _fitness;
}

bool Solution::isFeasible(){
    
    if(size()!=_Inst->nnodes()) return false;
    for(int i=0;i<_Inst->nnodes();++i){
        if(find(begin(), end(), i)==end()) return false;
    }
    
//    set<long> SetNodes;
//    for(auto i : *this) if(!SetNodes.insert(i).second) return false;
    
    return true;
    
//    bool *isvisited=new bool[_Inst->nnodes()];
//    for(int i=0;i<_Inst->nnodes();++i) isvisited[i]=false;
//    bool feas=true;
//    for(auto i : *this){
//        if(!isvisited[i]){
//            isvisited[i]=true;
//        }
//        else{
//            feas=false;
//            break;
//        }
//
//    }
//
//    delete [] isvisited;
//    return feas;
    
    
}
