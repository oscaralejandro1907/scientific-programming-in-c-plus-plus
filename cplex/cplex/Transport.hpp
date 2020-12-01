//
//  Transport.hpp
//  cplex
//
//  Created by Oscar Alejandro Hernández López on 26/11/20.
//

#ifndef Transport_hpp
#define Transport_hpp

#include <stdio.h>
#include "Header.h"

class Plant {
private:
    int _index;
    int _capacity; //Offer
    
public:
    
    Plant(int cap, int index);
};

class City {
    int _index;
    int _demand;
    
public:
    City(int dem, int index);
};


class Transport {
    int _nplants;
    int _ncities;
    
public:
    Transport();
    ~Transport();
    
    Plant **_Plants;
    City **_Cities;
};
#endif /* Transport_hpp */
