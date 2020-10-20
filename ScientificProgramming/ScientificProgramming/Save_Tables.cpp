//
//  Save_Tables.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 25/09/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "Save_Tables.hpp"
#include "Header.h"

/* Write a program that can receive through argv[] parameters and excecutes the following actions according to the number of parameters:
 - if the number of parameters is 3 (a string FileName, an integer k, and an integer n), a function Generate is called that generates K tables of n
 integers and then an other function Save is excecuted to write them in a file called FileName.
 - if the number of parameter is 1 (a string FileName), a function Read is called that read FileName and save all the data of the tables.
 Then an another function SORT will order these tables in decreasing order using a sorting algorithm of your choice and display the average processing time.
You should use a structure to save the data of the tables. */


struct table_characteristics{
    int n;
    int k;
    int **table;
};




void mainSaveTable (int argc, const char *argv[]){

    
    switch (argc-1) {
        case 1:
            cout<<"Program excecuted with 1 argument."<<endl;
            break;
            
        case 2:
            cout<<"Invalid number of argument."<<endl;
            break;
            
        case 3:
            cout<<"Program excecuted with 3 argument."<<endl;
            Generate (atoi(argv[3]),atoi(argv[2]));
            break;
            
        default:
            cout<<"Invalid number of arguments."<<endl;
            break;
    }
}

struct table_characteristics* Generate (int N, int K){  //Because it will take data from other structure
    
    table_characteristics t;
    srand(time(NULL));
    
    int random_N;
    
    t.table = new int*[K];
    for (int i=0; i<K; i++) {
        t.table[i] = new int[N];
    }
    
    for (int i=0; i<K; i++) {
        for (int j=0; j<N; j++) {
            random_N = 1 + rand()%(100);
            t.table[i][j] = random_N;
        }
    }
    
    cout<<"Function Generate executed correctly."<<endl;
    
    return &t;
    
}

void Save (
