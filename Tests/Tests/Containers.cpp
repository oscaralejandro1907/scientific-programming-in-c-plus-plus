//
//  Containers.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 01/12/20.
//

#include "Containers.hpp"

Container::Container(){
    _myvec.push_back("Oscar");
    _myvec.push_back("Alejandro");
    _myvec.push_back("Hernandez");
    _myvec.push_back("Lopez");
    
    _team.insert(pair<int, string>(1,"Courtois"));
    _team.insert(pair<int, string>(7,"Hazard"));
    _team.insert(pair<int, string>(4,"Sergio Ramos"));
    _team.insert(pair<int, string>(10,"Modric"));
    
    _Arcs.push_back(arc(0, 1, 1));
    _Arcs.push_back(arc(0, 2, 2));
    _Arcs.push_back(arc(1, 3, 3));
    _Arcs.push_back(arc(2, 3, 4));
}

void Container::print(vector<string> v){
    vector<string>::iterator it; //Declare an iterator to a vector of strings
    
    for (it=v.begin(); it != v.end();it++) {
        cout<<*it<<" "<<flush;
    } cout<<endl;
    
    cout<<*v.begin();
}

void Container::printingMap(){
    map<int, string>::iterator it;
    
    for (it=_team.begin(); it!=_team.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

void Container::displayVectorObjects(){
    //Access last element of destinies in the vector of arc.dest
    cout<<_Arcs.back().dest<<endl;
    
    //Print all that destini is the last
    for (auto a:_Arcs) if (a.dest==_Arcs.back().dest) {
        cout<<"Ending arc: "<<a.id_arc<<endl;
    } cout<<endl;
}
