//
//  Finances.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#ifndef Finances_hpp
#define Finances_hpp

#include <stdio.h>
#include "Header.h"

class Finance {
private:
    float _p; //principle amount
    int _time;
    float _r; //rate of interest
    
public:
    Finance();
    ~Finance();
    
    float simpleInterest();
    float discount(int amount);
};

class Worker {
private:
    double _basicsalary;
    const double _allowances=0.12; //Percentage
    const double _deductions=0.3; //Percentage
    
public:
    Worker();
    
    double netSalary();
    
};

#endif /* Finances_hpp */
