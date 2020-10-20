//
//  04_TypeIntegers.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 09/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "04_TypeIntegers.hpp"

void typeIntegers_for(){
    
    int integer;
    
    for (int i=8; i<24; i++) {
        cout<<"Please, enter the integer between 8 and 23 (both included): ";cin>>integer;
        if (integer>=8 && integer<=23) {
            cout<<integer;
        } else {
            cout<<"Error, please type a correct integer";
            i=i-1; //this is important because if it is not specified we out the for loop without completing the task;
        }
    }
    
}


void typeIntegers_while(){
    
    int integer=8;
    
    while (integer>=8 && integer<=23) {
        cout<<"Please, enter the integer between 8 and 23 (both included): ";cin>>integer;
    }
}
