//
//  Instance.hpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 08/11/20.
//

#ifndef Instance_hpp
#define Instance_hpp

#include <stdio.h>
#include "Header.h"

class Node {
    double _xpos, _ypos;
    string _name;
    
public:
    Node(double x, double y);
    
    double distTo(Node *D);
};

class Instance {
    
    string _name;
    Node **ListofNodes;
    
public:
    Instance();
    
    Node *getNode(int nodeid){return ListofNodes[nodeid];}
    double calculateDistance(Node *O, Node *D);
    
};

class Functions {
private:
    vector<int> _elem;
    
public:
    Functions();
    
    void interchange(vector<int> v, int arg1, int arg2);
};

#endif /* Instance_hpp */
