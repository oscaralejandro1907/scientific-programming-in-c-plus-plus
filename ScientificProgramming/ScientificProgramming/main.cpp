//
//  main.cpp
//  ScientificProgramming
//
//  Created by Oscar Alejandro Hernández López on 06/07/20.
//  Copyright © 2020 Oscar Alejandro Hernández López. All rights reserved.
//

#include "Header.h"

//Include the files where the data will be read.
#include "01_Area_Perimeter.hpp"
#include "02_Capturing_Integers.hpp"
#include "03_Calculate_Distance.hpp"
#include "04_TypeIntegers.hpp"
#include "05_SmallestValue.hpp"
#include "06_Fibonacci.hpp"
#include "07_Factorial.hpp"
#include "08_PrimeNumber.hpp"
#include "09_RandomNumber_Game.hpp"
#include "Pointer_Table.hpp"
#include "NK_Tables.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    /*Call the stuff in files:*/
    
    //calculate_area_perimeter_rectangle();
    //type_integers();
    //calculate_distance();
    //typeIntegers_while();
    //smallestValue();
    //fibonacci();
    //factorial();
    //isTheNumberPrime();
    //randomNumber();
    //mainPointerTable();
    //mainNKTables();
    
    struct employee {
        char first_name[16];
        int age;
    };
    
    employee *p_emp = new employee;
    
    strcpy(p_emp->first_name, "zara");
    
    
    
    
    
    
    return 0;
}
