//
//  Vectors.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 25/11/20.
//

#include "Vectors.hpp"

Vectors::Vectors(){
    
    vector<int> v1;
    
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(2);
    _myvec1=v1;
    
    vector<int> v2{ 100, 200, 300, 400 };
    _myvec2=v2;
  
    
    vector<int> v3 = {10,11,49,13,32,16,17,18,21,22,23,24,25,29,30};
    _myvec3=v3;
}

int Vectors::sum(vector<int> vec){
    int varsum=0;
    
    for (auto i:vec){
        varsum+=i;
    }
    //cout<<"The sum of the vector is: "<<varsum<<endl;
    return varsum;
}

void Vectors::appendOtherVector(){
    //appending elements of vector v2 to vector v1
    _myvec1.insert(_myvec1.end(), _myvec2.begin(), _myvec2.end());
    cout<<"Elements appended."<<endl;
    
    for(auto i:_myvec1){
        cout<<i<<" "<<flush;
    }
}

bool Vectors::isAlreadyAdded(int value, int indexlen) {
     for(int i=0; i<indexlen; i++)
        if(_myvec1[i]==value)
              return true;
     return false;
}

void Vectors::addRandomElements(){
    
int n=_myvec3.size()*0.2;
cout<<"\nAmount of numbers to append: "<<n<<endl;
    
    random_device rd;
    mt19937 g(rd());
    shuffle(_myvec3.begin(), _myvec3.end(),g); //Here 'g' is the seed
    for (int i=0; i<n; i++) {
        _myvec1.push_back(_myvec3[i]);
        cout<<"Elements pushed back are: "<<_myvec3[i]<<endl;
    }
}

void Vectors::printAnIntVector(vector<int> vec){
    cout<<"Vector is: ";
    for (auto i: vec) {
        cout<<i<<" "<<flush;
    }
}

void Vectors::sortVector(vector<int> vec){
    sort(vec.begin(), vec.end());
    
    cout<<"Sorted vector: "<<endl;
    for (auto i:vec) {
        cout<<i<<" "<<flush;
    } cout<<endl;
}

int Vectors::getGreaterValue(vector<int> vec){
    auto max = *max_element(vec.begin(), vec.end());
    return max;
}

int Vectors::getMinValue(vector<int> vec){
    auto min = *min_element(vec.begin(), vec.end());
    return min;
}

int Vectors::searchIndex(vector<int> vec, int key){
    //Search is the process of finding the location of an element in a
    //container.
    auto it = find(vec.begin(), vec.end(), key);
    
    if (it != vec.end()) {
        auto index = it - vec.begin(); //To convert an iterator to an index you simply use this
        return  (int)index;
    } else {
        cout<<"Element is not in the vector"<<endl;
        return -1;
    }
}

void Vectors::average(){
    
    vector<int> vec;
    int n;
    for (int i=0; i<5; i++) {
        cout<<"Enter an integer number: "<<flush;
        cin>>n;
        vec.push_back(n);
    }
    
    int sum = accumulate(vec.begin(), vec.end(), 0);
    double mean = (double)sum/vec.size();
    
    cout<<"Mean is: "<<mean<<endl;
}

void Vectors::checkElement(){
  
    vector<int> v = { 4, 7, 5, 2, 6, 9 };
    int key = 6;
    
    if (count(v.begin(), v.end(), key)) {
        cout << "Element found";
    }
    else{
        cout << "Element not found";
    }
     
}



