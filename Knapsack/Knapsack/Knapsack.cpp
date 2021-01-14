//
//  Knapsack.cpp
//  Knapsack
//
//  Created by Oscar Alejandro Hernández López on 09/12/20.
//

#include "Knapsack.hpp"

Product::Product(int id, string name, int quan, double ucost, double price, double weight){
    
    _productid = id;
    _name = name;
    _quantity = quan;
    _unitcost = ucost;
    _saleprice = price;
    _weight = weight;
    
}

Knapsack::Knapsack(string filepath){
    
    _InstanceName = filepath;
    ifstream input(_InstanceName.c_str());
    
    if(!input.is_open() ){
        cout<<"Error: cannot open file "<<_InstanceName<<endl;
        exit(15);
    }
    
    string buffer;
    input>>buffer>>_nproducts;
    
    _Products = new Product*[_nproducts];
    for (int p=0; p<_nproducts; p++) {
        int id,quant;
        string name;
        double ucost, price, weight;
        input>>id>>name>>quant>>ucost>>price>>weight;
        _Products[p] = new Product(id,name,quant,ucost,price,weight);
    }
}

Knapsack::~Knapsack(){
//    for (int p=0; p<_nproducts; p++) {
//        delete _Products[p];
//    }
//    
//    delete [] _Products;
}




