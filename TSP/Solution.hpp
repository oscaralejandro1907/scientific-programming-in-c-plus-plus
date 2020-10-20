//
//  Solution.hpp
//  TSP
//
//  Created by Vincent on 7/5/19.
//

#ifndef Solution_hpp
#define Solution_hpp

#include "Header.hpp"
#include "Instance.hpp"


class Solution : public list<long>{
private:

    Instance *_Inst;
    double _fitness;
    
public:
    Solution(Instance *);
    Solution(Solution *);
    
    //~Solution();
    
    Instance* instance() {return _Inst;};
    double fitness() {return _fitness;};
    
    double computefitness();
    bool isFeasible();
    
    void print(){
        cout<<setw(15)<<_fitness<<setw(5)<<": ";
        for(auto i : *this) cout<<setw(5)<<i;
        cout<<endl;
    }
    
};

#endif /* Solution_hpp */
