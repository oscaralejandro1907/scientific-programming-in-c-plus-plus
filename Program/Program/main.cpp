//
//  main.cpp
//  Program
//
//  Created by Oscar Alejandro Hernández López on 02/12/20.
//

#include <iostream>
#include "Header.h"
#include "Personal_Finance.hpp"


void writeOutput(string expense){
    ofstream output ("output.txt");
    
    output<<expense;
    output.close();
}

int main(int argc, const char * argv[]) {
    
    Finance *f = new Finance();
    
    f->divideIncome(f->getIncome());
    
    cout<<f->payRent();
    
    writeOutput("Expense1");
    
    
    return 0;
}
