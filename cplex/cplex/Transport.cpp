//
//  Transport.cpp
//  cplex
//
//  Created by Oscar Alejandro Hernández López on 26/11/20.
//

#include "Transport.hpp"

Plant::Plant(int cap, int index){
    _index=index;
    _capacity=cap;
}

City::City(int dem, int index){
    _index=index;
    _demand=dem;
}

Transport::Transport(){
    _nplants=3;
    _ncities=4;
    
    _Plants = new Plant*[_nplants];
    
    _Plants[0]=new Plant(35,1);
    _Plants[1]=new Plant(50,2);
    _Plants[2]=new Plant(40,3);
    
    _Cities = new City*[_ncities];
    
    _Cities[0]=new City(45,1);
    _Cities[1]=new City(20,1);
    _Cities[2]=new City(30,1);
    _Cities[3]=new City(30,1);
}

Transport::~Transport(){
    for (int p=0; p<_nplants; p++) {
        delete _Plants[p];
    }
    
    for (int c=0; c<_nplants; c++) {
        delete _Cities[c];
    }
    
    delete [] _Plants;
    delete [] _Cities;
}
