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
    return sqrt(pow(this->_xpos-D->_xpos,2) + pow(this->_ypos-D->_ypos,2));
}

Instance::Instance(){
    
    // read the values of the nodes:
    double x1=-4.0, y1=0.0;
    double x2=5.0, y2=0.0;
    
    //assign this values to nodes:
    
    //ListofNodes = new Node(x1,y1); //This time I realized I have to create a double pointer to a Node
    
    ListofNodes = new Node*[2];
    
    ListofNodes[0] = new Node(x1,y1);
    ListofNodes[1] = new Node(x2,y2);
    
}

double Instance::calculateDistance(Node *O, Node *D){
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
