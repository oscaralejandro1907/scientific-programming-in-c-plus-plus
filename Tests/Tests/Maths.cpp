//
//  Maths.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 21/11/20.
//

#include "Maths.hpp"

Rectangle::Rectangle(){
    _length=10;
    _width=5;
}

Rectangle::Rectangle(Rectangle &arect){
    _length=arect._length;
    _width=arect._width;
}

float Maths::formula(){
    
    float x;
    x=(float)(_b*_b-4*_a*_c)/2*_a;  //Casteo
    
    cout<<"The value of the calculated formula is: "<<x<<endl;
    return x;
}

float Maths::areaTriangle(){
    float area;
    area =  (_base*_height)/2;
    
    return area;
}

int Maths::sumofN(int N){
    int sum=0;
    for (int i=0; i<=N; i++) {
        sum = sum+i;
    }
    return sum;
}

void Maths::roots(){
    float discriminant,root1,root2;
    
    discriminant = pow(_b, 2)-4*_a*_c;
    if (discriminant==0) {
        root1=-_b + sqrt((pow(_b, 2)-4*_a*_c))/(2*_a);
        cout<<"Roots real and equal"<<root1<<endl;
    } else if (discriminant>0) {
    root1 = -_b + sqrt((pow(_b, 2)-4*_a*_c))/(2*_a);
    root2 = -_b - sqrt((pow(_b, 2)-4*_a*_c))/(2*_a);
    
    cout<<"The roots are: "<<root1<<" and "<<root2<<endl;
    } else {
        cout<<"Roots are imaginary"<<endl;
        }
}

float Maths::areaCircle(int radio){
    float area=M_PI*pow(radio, 2);
    return area;
}

float Maths::cylinderVolume(int radio, int height){
    
    float vol=M_PI*pow(radio, 2)*height;
    return vol;
}

void Maths::arithmeticOperations(float n1, float n2, int option){
    
    float result;
    
    cout<<" Select a number for the arithmetic: "<<"\n1.Add"<<"\n2.Sub"<<"\n3.Mult"<<"\n4.Div"<<endl;
    
    switch (option) {
        case 1:
            result=n1+n2;
            cout<<result<<endl;
            break;
        case 2:
            result=n1-n2;
            cout<<result<<endl;
            break;
        case 3:
            result=n1*n2;
            cout<<result<<endl;
        case 4:
            result= n1/n2;
            if (n2==0) {
                cout<<"Division by zero is not defined"<<endl;
            } else {
                cout<<result<<endl;
            }
            
            break;
            
        default:
            cout<<"Enter a valid number"<<endl;
            break;
    }
    
}

void Maths::multiplicationTable(int n){
    
    for (int i=1; i<11; i++) {
        cout<<n<<" * "<<i<<" = "<<i*n<<endl;
    }
}

long int Maths::factorial(int N){
    long int f=0;
    
    if (N==0) {
        return 1;
    } else {
        for (int i=1; i<=N; i++) {
            f=N*factorial(N-1); //This is call recursive function (the function inside the function)
        }
    }
    return f;
}

vector<int> Maths::findingFactors(int n){
    vector<int> factors;
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            factors.push_back(i);
        }
    }
    return factors;
}

void Maths::isPerfectNumber(int anumber){
    //If the sum of the factors of a number is its
    //double then is a perfect number.
    
    vector<int> vec;
    vec=findingFactors(anumber);
    int sum=0;
    for (auto i:vec) {
        sum+=i;
    }
    if (sum==2*anumber) {
        cout<<anumber<<" is a perfect number"<<endl;
    } else {
        cout<<anumber<<" is not perfect"<<endl;
    }
}

void Maths::isPrimeNumber(int n){
    //A number is prime if is only divisible by 1
    //and itself
    vector<int> v;
    v=findingFactors(n);
    if (v.size()==2) {
        cout<<n<<" is prime"<<endl;
    } else {
        cout<<n<<" is not prime"<<endl;
    }
    
}

void Maths::generateRandomNumber(){
    
    int randomN;
    srand(time(NULL));
    
    randomN = 1 + rand()%(100);
}
