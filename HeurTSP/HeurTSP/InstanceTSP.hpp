//
//  InstanceTSP.hpp
//  HeurTSP
//
//  Created by Oscar Alejandro Hernández López on 06/12/20.
//

#ifndef InstanceTSP_hpp
#define InstanceTSP_hpp

#include <stdio.h>
#include "Header.h"

class Node {
private:
    long _id;
    long _x;
    long _y;
    
public:
    Node(long nodeid, long x, long y);
    ~Node();
};

class TSP {
private:
    string _InstanceName;
    long _nnodes;
    Node **_Nodes;
    
public:
    TSP(string filename);
    ~TSP();
    
    void printTSP();
    
};

#endif /* InstanceTSP_hpp */
