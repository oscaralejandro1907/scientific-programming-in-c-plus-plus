//
//  Finances.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#include "Finances.hpp"


Finance::Finance(){
    _p=1000.00; //Mexican Peso
    _time=6; //6 months
    _r=10; //10%
}

float Finance::simpleInterest(){
    float si = (_p*_r*_time)/100;
    return si;
}

float Finance::discount(int amount){
    
    float discAmount;
    
    if (amount>=5000.00) {
        discAmount=amount-amount*0.20;
        cout<<"You've got a 20% discount. You'll only have to pay: "<<discAmount<<endl;
    } else if (amount>=2000.00 && amount<5000.00){
        discAmount=amount-amount*0.10;
        cout<<"You've got a 10% discount. You'll only have to pay: "<<discAmount<<endl;
    } else {
        discAmount=amount-amount*0.05;
        cout<<"You've got a 5% discount. You'll only have to pay: "<<discAmount<<endl;
    }
    
    return discAmount;
}

Worker::Worker(){
    _basicsalary=15000.00;
}

double Worker::netSalary(){
    return _basicsalary + (_basicsalary*_allowances) - (_basicsalary*_deductions);
}
