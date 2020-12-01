//
//  Enum_Typedef.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#include "Enum_Typedef.hpp"
#include "Header.h"

Classifications::Classifications(){
    
    _dayselected=sat;
    _department=sales;
    
    m1=150.0;
    m2=600.0;
}

void Classifications::status(){
    
    cout<<"You started at day "<<_dayselected<<" at the department "<<_department<<endl;
    
    cout<<"MARKS ARE: "<<m1<<" and "<<m2<<endl;
}
