//
//  07_Factorial.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 14/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "07_Factorial.hpp"

void factorial () {
    
    int n;
    cout<<"Enter an integer: ";cin>>n;
    
    int fact=1;
    
    if (n==0) {
        cout<<"The factorial is: "<<fact<<endl;
    } else {
        for (int i=1; i<=n; i++) {
            fact=fact*i;
        }
        cout<<"The factorial is: "<<fact<<endl;
    }
    
}
