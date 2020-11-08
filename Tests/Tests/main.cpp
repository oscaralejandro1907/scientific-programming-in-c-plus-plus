//
//  main.cpp
//  Tests
//
//  Created by Oscar Alejandro Hernández López on 03/11/20.
//


#include "Header.h"
#include "Info.hpp"

int sum(int arr[]){
    
    int len = sizeof(arr);
    int sum=0;
    
    for (int i=0; i<len; i++) {
        sum+=arr[i];
        cout<<i;
        
    }
    return sum;
   
}

int main(int argc, const char * argv[]) {
    
    int numbers[] = {1,2,3,4};
    
    cout<<sum(numbers)<<endl;
    
    
    return 0;
}

