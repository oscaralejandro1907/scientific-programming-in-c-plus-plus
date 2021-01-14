//
//  Containers.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 01/12/20.
//

#ifndef Containers_hpp
#define Containers_hpp

#include <stdio.h>
#include "Header.h"

struct arc{
    int org,dest,id_arc;
    arc(int o, int d, int id){
        org=o;
        dest=d;
        id_arc=id;
    }
};

class Container {
    vector<string> _myvec;
    map<int, string> _team;
    vector<arc> _Arcs;
    
public:
    Container();
    
    vector<string> getMyVec(){return _myvec;}
    void print(vector<string> v);
    
    void printingMap();
    
    void displayVectorObjects();
};

#endif /* Containers_hpp */
