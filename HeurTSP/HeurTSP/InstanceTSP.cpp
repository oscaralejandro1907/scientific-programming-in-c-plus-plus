//
//  InstanceTSP.cpp
//  HeurTSP
//
//  Created by Oscar Alejandro Hernández López on 06/12/20.
//

#include "InstanceTSP.hpp"

Node::Node(long nodeid,long x, long y){
    _id=nodeid;
    _x=x;
    _y=y;
}

Node::~Node(){
    
}

TSP::TSP(string filename){
    
    //Read File
    _InstanceName=filename;
    ifstream input(_InstanceName.c_str());
    
    if (!input.is_open()) {
        cout<<"Error: cannot open file"<<_InstanceName<<endl;
        exit(15);
    }
    
    string buffer;
    
    do {
        input>>buffer;
    } while (buffer!="DIMENSION"); input>>buffer;
    input>>_nnodes;
    
    _Nodes = new Node*[_nnodes];
    do {
        input>>buffer;
    } while (buffer!="NODE_COORD_SECTION");
    
    for (long i=0; i<_nnodes; i++) {
        long nodeid,x,y;
        input>>nodeid>>x>>y;
        _Nodes[i]=new Node(nodeid,x,y);
    }
    
    //Cleaning
    input.close();

}

TSP::~TSP(){
    for (int i=0; i<_nnodes; i++) {
        delete _Nodes[i];
    }
    
    delete [] _Nodes;
}


void TSP::printTSP(){
    cout<<"Instance: "<<_InstanceName<<endl;
}
