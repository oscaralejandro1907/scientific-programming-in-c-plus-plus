//
//  Instance.cpp
//  TSP


#include "Instance.hpp"

double EucDist(Node *N1, Node *N2){
    return sqrt(pow(N1->x()-N2->x(),2) + pow(N1->y()-N2->y(),2));
}

Instance::Instance(string Filename){
    
    //Read File
    ifstream input(Filename.c_str(), ios::in);
    if(!input.is_open()){
        cout<<"File: "<<Filename<<" Not Found"<<endl;
        exit(10);
    }
    
    _FileName=Filename;
    
    //Number of Nodes
    string buffer;
    do input>>buffer; while(buffer!="DIMENSION");
    input>>buffer;
    input>>_nnodes;
    //cout<<"# Nodes: "<<_nnodes<<endl;
    
    //Nodes
    _Nodes=new Node*[_nnodes];
    do input>>buffer; while(buffer!="NODE_COORD_SECTION");
    
    for(long i=0;i<_nnodes;i++){
        long id,x,y;
        input>>id>>x>>y;
        _Nodes[i]=new Node(id,x,y);
        //cout<<setw(10)<<_Nodes[i]->id()<<setw(10)<<_Nodes[i]->x()<<setw(10)<<_Nodes[i]->y()<<endl;
    }
    
    //Cleaning
    input.close();
    
}

Instance::~Instance(){
    for(int i=0;i<_nnodes;i++) delete _Nodes[i];
    
    delete [] _Nodes;
    
    
    
}
