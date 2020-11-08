//
//  Info.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 03/11/20.
//

#include "Info.hpp"

Info::Info(vector<int> pvector,int n){
    _myvec=pvector;
    _len=n;
}


void Info::fillVector(){
    
    for (int i=0;i<_len;i++) {
        int r = rand() % 2;
        _myvec.push_back(r);
    }
    
}


void Info::printVector(){
    for (auto i:_myvec) {
        cout << i<<" ";
    }
    cout<<endl;
}
