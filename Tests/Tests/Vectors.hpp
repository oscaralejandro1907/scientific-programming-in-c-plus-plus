//
//  Vectors.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 25/11/20.
//

#ifndef Vectors_hpp
#define Vectors_hpp

#include <stdio.h>
#include "Header.h"

class Vectors{
private:
    
    vector<int> _myvec1;
    vector<int> _myvec2;
    vector<int> _myvec3;
    
public:
    Vectors();
    
    vector<int> getVector1() {return _myvec1;};
    
    int sum(vector<int> vec);
    void appendOtherVector();
    bool isAlreadyAdded(int value, int index);
    void addRandomElements();
    void printAnIntVector(vector<int> vec);
    void sortVector(vector<int> vec);
    int getGreaterValue(vector<int> vec);
    int getMinValue(vector<int> vec);
    int searchIndex(vector<int> vec, int key);
    void checkElement();
    
    void average();
};

#endif /* Vectors_hpp */
