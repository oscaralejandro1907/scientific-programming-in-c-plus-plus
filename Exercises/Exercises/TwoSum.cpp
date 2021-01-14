//
//  TwoSum.cpp
//  Exercises
//
//  Created by Oscar Alejandro Hernández López on 24/12/20.
//

#include "Header.h"

/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 */
class Solution {
private:
    vector<int> sol;
    
public:
    vector<int> addSum(vector<int> arr, int tar){
        
        
        for (int i=0; i<arr.size()-1; i++) {
            for (int j=1; j<arr.size(); j++) {
                if (arr[i]+arr[j]==tar) {
                    sol.push_back(i);
                    sol.push_back(j);
                }
            }
        }
        return sol;
    }
    
    void print(){
        for (int i=0; i<sol.size(); i++) {
            cout<<sol[i]<<flush;
        }
    }
};
