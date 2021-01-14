//
//  Personal_Finance.cpp
//  Program
//
//  Created by Oscar Alejandro Hernández López on 02/12/20.
//

#include "Personal_Finance.hpp"

Finance::Finance(){
    cout<<"Enter your income: ";
    cin>>_income;
}

void Finance::divideIncome(double income){
    _income=income;
    
    vector<string> buckets = {"Neccesity", "Investments", "Fun"};
    
    vector<int> percents = {50,40,10};
    
    cout<<"Division of your bucket:"<<endl;
    
    for (int i=0;i<3;i++) {
        cout<<buckets[i]<<": "<<income*percents[i]/100<<" || ";
    } cout<<endl;
    
}

int Finance::payRent(){
    int recom=(_income*12)/40;
    return recom;
}


