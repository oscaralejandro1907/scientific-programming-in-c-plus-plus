//
//  Pointer_Table.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 17/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "Pointer_Table.hpp"

/*  Write a program that asks the user to type the size N and the quantity K of tables to generate,
then calls a function that will fill randomly K tables of size N with values (not only integers) in [0,1000].
This function should return a pointer to an array of arrays containing all the generated tables.  */

void mainPointerTable (){
   
    int n, k;
    float **pointer; //For declaring it will be a matrix
    cout<<"Introduzca la longitud del arreglo: "; cin>>n;
    cout<<"Introduzca la cantidad de arreglos: "; cin>>k;
    
    //Generating the matrix
    pointer = new float *[k];
    for (int i=0; i<k; i++) {
        pointer[i] = new float[n];
    }
    
    fill(n, k, pointer);
    
    //Release memory for every "new"
    for (int i=0;i<k;i++) {
        delete [] pointer [i];
    }

    delete [] pointer;

}


void fill(int sizeN, int quantityK, float **pointerMatrix) {
    
    int randomN;
    
    for (int i=0; i<quantityK; i++) {
        for (int j=0; j<sizeN; j++) {
            randomN=rand()%(1001);
            pointerMatrix[i][j]=randomN;
            cout<<pointerMatrix[i][j]<<" ";    //Print elements of the row
        }
        cout<<endl;    //Print each row in the next line
    }
    
}
