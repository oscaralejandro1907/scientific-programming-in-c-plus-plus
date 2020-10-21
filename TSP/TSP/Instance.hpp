//
//  Instance.hpp
//  TSP


#ifndef Instance_hpp
#define Instance_hpp

#include "Header.hpp"

class Node;

double EucDist(Node *, Node *);

class Node{
private:
    long _id;
    long _x;
    long _y;
    
public:
    Node(long id, long x, long y){
        _id=id; _x=x; _y=y;
    }
    
    long x() {return _x;}
    long y() {return _y;}
    long id() {return _id;}
};


class Instance{
private:
    string _FileName;
    long _nnodes;
    Node **_Nodes;
    
public:
    Instance(string Filename);
    ~Instance();
    
    string FileName() {return _FileName;}
    long nnodes() {return _nnodes;}
    Node* getNode(long id) {return _Nodes[id];}
    
    double distance(long i,long j){
        return round(EucDist(_Nodes[i], _Nodes[j]));
    }
    
    
};

#endif /* Instance_hpp */
