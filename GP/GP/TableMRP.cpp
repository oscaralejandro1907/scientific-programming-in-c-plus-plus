//
//  TableMRP.cpp
//  GP
//
//  Created by Oscar Alejandro Hernández López on 26/12/20.
//

#include "TableMRP.hpp"

MRP::MRP(){
    
    _weeks=6;
    _ce = 500;
    _prodPrice=90;
    _inventoryCost=10;
    _demand = {100,250,130,140,200,120};
    
}

double MRP::qOptimal(int ce, int pv, int invcost){
    ce = _ce;
    pv = _prodPrice;
    invcost = _inventoryCost;
    
    float dmed = accumulate(_demand.begin(), _demand.end(), 0.0)/_demand.size();
    
    return sqrt(2*ce*dmed/pv*(invcost/100));
}

void MRP::makeMRP(){
    
    nb = _demand;
    
    ii.push_back(600);
    
    for (int w=0; w<_weeks; w++) {
        ifi.push_back(ii[w]-_demand[w]);
        ii.push_back(ifi[w]);
    }
    
    cout<<"Necesidad bruta:    ";
    for (int w=0; w<_weeks; w++) {
        cout<<nb[w]<<" "<<flush;
    }cout<<endl;
    
    cout<<"Inventario inicial: ";
    for (int w=0; w<_weeks; w++) {
        cout<<ii[w]<<" "<<flush;
    }cout<<endl;
    
    cout<<"Inventario final:   ";
    for (int w=0; w<_weeks; w++) {
        cout<<ifi[w]<<" "<<flush;
    }cout<<endl;
    
    
}

