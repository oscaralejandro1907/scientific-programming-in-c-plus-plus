//
//  HR.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 22/11/20.
//

#ifndef HR_hpp
#define HR_hpp

#include <stdio.h>
#include "Header.h"


class Person {
    string _name;
    string _address;
    string _phone;
    
public:
    Person();
    
    string getName(){return _name;};
    string getAdress(){return _address;};
    string getPhoneNumber(){return _phone;};
    
    void tostring();
};

#endif /* HR_hpp */
