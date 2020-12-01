//
//  HR.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 22/11/20.
//

#include "HR.hpp"


Person::Person(){
    _name = "Mary";
    _address = "Boulevard Street 123";
    _phone = "032872123";
}

void Person::tostring(){
    cout<<"Name: "<<_name<<". Address is: "<<_address<<". Phone number is:"<<_phone<<endl;
}
