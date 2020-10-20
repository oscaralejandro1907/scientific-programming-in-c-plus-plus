//
//  NK_Tables.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 18/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "NK_Tables.hpp"

/*  Write a program that asks the user to type the size N and the quantity K of tables to generate,
then calls a function that will fill randomly K tables of size N with values (not only integers) in [0,1000].
This function should return a pointer to an array of arrays containing all the generated tables.
 
Modify the previous function such that it returns K tables of randomly sizes in [10,N]
(The program should check if the the value N typed by the user is greater to 10).
 */

void mainNKTables(){
    
    int n,k;
    int *rand_length;
    float **pointer;
    int TOP=20;
    
    do {
        cout<<"Type a length greater than 10 ";cin>>n;
        
    } while (n<10);
    
    cout<<"Type the number of arrays: ";cin>>k;
    
    rand_length = new int [k];
    
    pointer = new float*[k];
    for (int i=0; i<k; i++) {
        rand_length[i] = 10 + rand()%(TOP-10);
    }
    
    fillRandomly(k, rand_length, pointer);
    printTables(k, rand_length, pointer);
    
    
    for (int i=0; i<k; i++) {
        delete [] pointer[i];
    }
    
    delete [] pointer;
    
    delete [] rand_length;

}

void fillRandomly(int quantityK, int *PointerofLengths, float **PointerMatrix){
    
    int randomN;
    
    //We need dynamic Matrix
    for (int i=0; i<quantityK; i++) {
        PointerMatrix[i] = new float[PointerofLengths[i]];
    }
    
    for (int i=0; i<quantityK; i++) {
        for (int j=0; j<PointerofLengths[i]; j++) {
            randomN=rand()%(1001);
            PointerMatrix[i][j] = randomN;
            cout<<PointerMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
