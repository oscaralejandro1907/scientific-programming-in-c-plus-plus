//
//  TableMRP.hpp
//  GP
//
//  Created by Oscar Alejandro Hernández López on 26/12/20.
//

#ifndef TableMRP_hpp
#define TableMRP_hpp

#include <stdio.h>

#include "Header.h"

class MRP {
private:
    int _weeks;
    int _ce; //Costo de emision o lanzamiento del lote
    int _prodPrice; //Precio de venta del producto
    int _inventoryCost; //Tasa de manterner inventario (percent)
    
    vector<int> _demand; //Vector of demands of each week
    
    vector<int> nb;
    vector<int> ii;
    vector<int> ifi;
    
    
public:
    MRP();
    ~MRP();
    
    double qOptimal (int ce, int pv, int invcost);
    void makeMRP();
    void print();
};
#endif /* TableMRP_hpp */
