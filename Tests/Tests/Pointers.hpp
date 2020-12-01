//
//  Pointers.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 14/11/20.
//

#ifndef Pointers_hpp
#define Pointers_hpp

#include <stdio.h>
#include "Header.h"

//A Pointer is a variable used for storing the address of data

class Pointers {
    int _x;
    int *p;
    
    int *_arrI;  //an array
    
public:
    Pointers();
    ~Pointers();
    
    int *getArray (){return _arrI;}
    void printPointer1D(int *arr,size_t arrsize);
};
#endif /* Pointers_hpp */
