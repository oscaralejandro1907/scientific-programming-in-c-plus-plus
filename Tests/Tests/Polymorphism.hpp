//
//  Polymorphism.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 25/11/20.
//

#ifndef Polymorphism_hpp
#define Polymorphism_hpp

#include <stdio.h>
#include "Header.h"

class Animal {
public:                                         // If you have a pointer to a superclass type or a reference
    virtual void speak (){                      // you can always make it refer to an object of some subclass
        cout<<"Depends of the animal"<<endl;    // And you need the virtual keyword on your overwritten methods
    }                                           // in a base class to make it work.
    
    void func(){cout<<"Animal called";}
};


class Cat:public Animal {                       //It only needs to be created the function virtual in the
public:                                         //main class (top in hierarchy
    void speak(){
        cout<<"Meeouww"<<endl;
    }
    
    void jump(){cout<<"Cat jumped";}
};


#endif /* Polymorphism_hpp */
