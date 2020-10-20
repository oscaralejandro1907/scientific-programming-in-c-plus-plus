//
//  01_Area_Perimeter.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 06/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "01_Area_Perimeter.hpp"

//Creamos este ejercicio fuera de la función main del proyecto del cpp del mismo nombre para no ocupar tanto espacio. Para ello:
//1. Puse todo dentro de una misma función que declaré que va ser del tipo void.
//2. Su prototipo está en el hpp ya que ese hpp es el que llamaremos en el main del proyecto.

void calculate_area_perimeter_rectangle () {
    
    float _width, _height;
    float area=0.0, perimeter=0.0;

    cout<<"Please enter the width of the rectangle: ";
    cin>>_width;

    cout<<"Please enter the height of the rectangle: ";
    cin>>_height;

    area=_width * _height;
    perimeter = 2 * (_width+_height);

    cout<<"\nThe area is: "<<area<<endl;
    cout<<"The perimeter is: "<<perimeter<<endl;

}

