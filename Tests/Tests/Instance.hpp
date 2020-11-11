//
//  Instance.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#ifndef Instance_hpp
#define Instance_hpp

#include <stdio.h>
#include "Header.h"

class Instance {
    int _a,_b,_c;
    vector<int> _myvec;
    
public:
    Instance();
    
    int sum();
    float formula();
};

#endif /* Instance_hpp */
