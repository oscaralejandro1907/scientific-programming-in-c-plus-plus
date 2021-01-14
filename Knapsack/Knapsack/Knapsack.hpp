//
//  Knapsack.hpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 09/12/20.
//

#ifndef Knapsack_hpp
#define Knapsack_hpp

#include <stdio.h>
#include "Header.h"

class Product {
private:
    int _productid;
    string _name;
    int _quantity;
    double _unitcost;
    double _saleprice;
    double _weight;
    
public:
    Product(int id, string name, int quan, double ucost, double price, double weight);
    ~Product();
};

class Knapsack {
private:
    
    string _InstanceName;
    
    int _nproducts;
    Product **_Products;
    
public:
    Knapsack(string filepath);
    ~Knapsack();
    
    Product *getProduct(int pid){return _Products[pid];}
    
};

#endif /* Knapsack_hpp */
