//
//  02_Capturing_Integers.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 06/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "02_Capturing_Integers.hpp"

void capturing_integers(){
    
    int integer;
    float suma=0;
    
    for (int i=0; i<5; i++) {
        cout<<"Please enter an integer: "<<endl;
        cin>>integer;
        suma=suma+integer;
    }
    
    cout<<"The average is: "<<suma/5<<endl;
}
