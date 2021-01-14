//
//  main.cpp
//  HeurTSP
//
//  Created by Oscar Alejandro Hernández López on 06/12/20.
//

#include <iostream>
#include "Header.h"
#include "InstanceTSP.hpp"

int main(int argc, const char * argv[]) {
    
    assert(argc==2); //If this expression is FALSE abort the program
    string FileName(argv[1]);
    
    TSP *data = new TSP(FileName);
    
    data->printTSP();
 
    return 0;
}
