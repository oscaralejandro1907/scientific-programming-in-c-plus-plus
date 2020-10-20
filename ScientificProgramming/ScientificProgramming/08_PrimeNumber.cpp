//
//  08_PrimeNumber.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 14/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "08_PrimeNumber.hpp"

void isTheNumberPrime(){
    
    int n, m=n/2, flag=0;

    cout<<"Type an integer: ";cin>>n;
    
    for (int i=2; i<=m; i++) {
        if (n%i==0) {
            cout<<"Number is not prime."<<endl;
            flag=1;
            break;
        }
        else{
            cout<<"Is prime"<<endl;
            break;
        }

    }

        
}
