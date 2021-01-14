//
//  Maths.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#ifndef Maths_hpp
#define Maths_hpp

#include <stdio.h>
#include "Header.h"
#include "Instance.hpp"

class Rectangle {
private:
    int _length;
    int _width;
    
public:
    Rectangle();
    Rectangle(Rectangle &arect); //Copy constructor by reference
};

class Maths {
private:
    
    float _base;
    float _height;
    
    float _a,_b,_c;
    
    //Rectangle **_Rectangles;
    
public:
    Maths();
    ~Maths();
    
    float formula();
    float areaTriangle();
    int sumofN(int N);
    void roots();
    float areaCircle(int radio);
    float cylinderVolume(int radio, int height);
    void arithmeticOperations(float a, float b, int option);
    void multiplicationTable(int n);
    
    long int factorial(int N);
    vector<int> findingFactors(int n);
    
    void isPerfectNumber(int anumber);
    void isPrimeNumber(int n);
    
    void generateRandomNumber();
    
};

#endif /* Maths_hpp */
