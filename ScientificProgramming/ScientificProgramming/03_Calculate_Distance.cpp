//
//  03_Calculate_Distance.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 06/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

//This time I'll make the function tu return an integer, non-void function.
#include "03_Calculate_Distance.hpp"

float calculate_distance (){
    
    float x1,y1,x2,y2;
    float distance=0;
    
    cout<<"Enter x coordenate of the first point: "<<endl; cin>>x1;
    cout<<"Enter y coordenate of the first point: "<<endl; cin>>y1;
    cout<<"Enter x coordenate of the second point: "<<endl; cin>>x2;
    cout<<"Enter y coordenate of the second point: "<<endl; cin>>y2;
    
    distance = sqrt (pow(x1-x2,2) + pow(y1-y2,2) );
    
    cout<<"\nThe distance between the two points is: "<<distance<<endl;
    
    return distance;
}
