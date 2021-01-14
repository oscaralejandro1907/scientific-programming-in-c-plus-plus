//
//  main.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 03/11/20.
//


#include "Header.h"

#include "Instance.hpp"
#include "Pointers.hpp"
#include "Enum_Typedef.hpp"
#include "Finances.hpp"
#include "Maths.hpp"
#include "Polymorphism.hpp"
#include "Vectors.hpp"
#include "HR.hpp"
#include "Containers.hpp"
#include "Strings.hpp"

class Student {
    int roll;
    string name;
    int subj1;
    int subj2;
    int subj3;
    
public:
    Student(int r,string n, int s1, int s2, int s3);
    
    int total();
    char grade();
};

int main(int argc, const char * argv[]) {

    Student s(1,"Raul",80, 85,87);
    cout<<s.grade();
    cout<<s.total();

    return 0;

}

Student::Student(int r,string n, int s1, int s2, int s3){
    roll = r;
    name = n;
    subj1 = s1;
    subj2 = s2;
    subj3 = s3;
}

int Student::total(){
    return subj1+subj2+subj3;
}

char Student::grade(){
    float average=(subj1+subj2+subj3)/3;
    
    if (average>80) {
        return 'A';
    } else if (average>=80 && average<=60){
        return 'B';
    }
    else return 'C';
}
