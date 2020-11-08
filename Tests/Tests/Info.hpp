//
//  Info.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 03/11/20.
//

#ifndef Info_hpp
#define Info_hpp

#include "Header.h"
#include <stdio.h>

class Info {
private:
    vector<int> _myvec;
    int _len;
    
public:
    Info(vector<int>,int);
    
    void fillVector();
    void printVector();
};

#endif /* Info_hpp */
