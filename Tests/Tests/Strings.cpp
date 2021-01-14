//
//  Strings.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 22/11/20.
//

#include "Strings.hpp"

Strings::Strings(){
    
}

void Strings::displayYourName(){
    char s[100];
    cout<<"Enter your name: ";
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    
    string str;
    cout<<"Enter another name: ";
    getline(cin, str); //Read multiple words
}

void Strings::traversingString(string str){
    //Iterators are used for traversing of accessing the characters of a string.
    string::iterator it; //Object of type iterator. IT WILL ACT LIKE A POINTER
    it=str.begin(); //Gives the beginning index of a string
    
    for (it=str.begin(); it!=str.end(); it++) {
        cout<<*it<<flush; //As it act like a Pointer we need to dereference it
    } cout<<endl;
}


