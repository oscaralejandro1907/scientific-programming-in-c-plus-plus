//
//  06_Fibonacci.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 14/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "06_Fibonacci.hpp"

void fibonacci (){
    
    int n, U=1;
    int x=1, y=1;
    cout<<"Please type an integer: ";cin>>n;
    
    if (n==0) {
        cout<<"The result of U function is: "<<1<<endl;
    }
    
    if (n==1) {
        cout<<"The result of U function is: "<<U<<endl;
    } else {
        for (int i=2; i<n; i++) {
            U = x + y;
            y = x;
            x = U;
        }
        cout<<"The result of U function is: "<<U<<endl;
    }
    
    
    
}
