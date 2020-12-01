//
//  Instance.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#include "Instance.hpp"


Node::Node(double x, double y){
    _xpos=x;
    _ypos=y;
}

double Node::distTo(Node *D){
    return sqrt(pow(this->getXPos() - D->getXPos(),2) + pow(this->getYPos() - D->getYPos(), 2));
    //The use of "this" is for giving value of _xpos and _ypos the constructor already has initializated, and later substract to the Node *D x and y that will be passed as a parameter.
}

Instance::Instance(){
    
    double x1=50.0, y1=25.0;
    double x2=20.0, y2=15.0;
    
    _ListNodes = new Node*[2];
    
    _ListNodes[1]=new Node(x1,y1);
    _ListNodes[2]=new Node(x2,y2);
}

double Instance::calcDistance(Node *O, Node *D){
    return O->distTo(D);
}

Functions::Functions(){
    _elem = {2,3,4,4,1,3};
}

void Functions::interchange(vector<int> v,int arg1, int arg2){
    
    v[0]=arg1;
    v[1]=arg2;

    swap(arg1, arg2);
    cout<<"Elements interchanged: "<<arg1<<" "<<arg2<<endl;
}
