//
//  Pointers.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 14/11/20.
//

#include "Pointers.hpp"

Pointers::Pointers(){
    _x=10;
    p=&_x; //Initialize the pointer, assigning the address that p will point
    
    
    _arrI = new int [8];
}

Pointers::~Pointers(){
    delete[] _arrI;
}

void Pointers::printPointer1D(int *arr,size_t arrsize){
    for (int i=0; i<arrsize; i++) {
        arr[i] = i;
        cout<<arr[i]<<endl;
    }
}
