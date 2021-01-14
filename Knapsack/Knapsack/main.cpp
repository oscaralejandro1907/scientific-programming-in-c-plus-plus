//
//  main.cpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 09/12/20.
//

#include "Header.h"
#include "Knapsack.hpp"

int main(int argc, char *argv[]){
    
    if(argc!=3){
        
        cout<<"Error: missing arguments"<<endl;
        exit(10);
    }
    
    string FileName(argv[1]);
    double TimLim=atof(argv[2]);
    
    Knapsack *k = new Knapsack(FileName);

}
