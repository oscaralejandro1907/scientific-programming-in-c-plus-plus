//
//  Instance.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#include "Instance.hpp"

Instance::Instance(){
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    _myvec=v;
    
    _a=1.3;
    _b=5.4;
    _c=1.2;
}

int Instance::sum(){
    int varsum=0;
    
    for (auto i:_myvec){
        varsum+=i;
    }
    
    //cout<<"The sum of the vector is: "<<varsum<<endl;
    return varsum;
}

float Instance::formula(){
    
    float x;
    x=(_b*_b-4*_a*_c)/2*_a;
    
    cout<<"The value of the calculated formula is: "<<x<<endl;
    return x;
}
