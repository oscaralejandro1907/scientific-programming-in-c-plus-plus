//
//  Instance.cpp
//  myTSP
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#include "Instance.hpp"

Instance::Instance(string file){
    
    //Read File
    ifstream input(file.c_str(),ios::in);
    if (!input.is_open()) {
        cout<<"File "<<file<<" not found"<<endl;
        exit(10);
    }
    
    _filename = file;
    
    
    input.close();
}
