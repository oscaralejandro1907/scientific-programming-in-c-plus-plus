//
//  Personal_Finance.hpp
//  Program
//
//  Created by Oscar Alejandro Hernández López on 02/12/20.
//

#ifndef Personal_Finance_hpp
#define Personal_Finance_hpp

#include <stdio.h>
#include "Header.h"

class Finance {
    double _income;
    
public:
    Finance();
    
    double getIncome(){return _income;}
    
    void divideIncome(double income);
    int payRent();
};

#endif /* Personal_Finance_hpp */
