//
//  05_SmallestValue.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 09/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "05_SmallestValue.hpp"

int smallestValue (){
    
    int smallest=2147483647;
    int Integers[10]; //Here we are creating an array of 10 integer elements
    
    for (int i=0; i<10; i++) {
        cout<<"Please, type an integer: "; cin>>Integers[i];
        if (Integers[i]<smallest) {
            smallest=Integers[i];
        }
    }
    
    cout<<"The smallest value is: "<<smallest<<endl;
    
    return smallest;
}
