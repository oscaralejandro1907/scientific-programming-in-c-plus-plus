//
//  Instance.hpp
//  myTSP
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#ifndef Instance_hpp
#define Instance_hpp

#include <stdio.h>
#include "Header.h"

class Instance {
private:
    string _filename;
    
public:
    Instance(string file);
    ~Instance();
};

#endif /* Instance_hpp */
