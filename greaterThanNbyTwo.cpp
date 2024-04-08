#include<bits/stdc++.h>
using namespace std;
//brute force solution for this problem 
int GH(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        int count = 0;
        for(int j = 0; j < v.size(); j++){
            if(v[i] == v[j]){
                count++;
            }

            if(count > (v.size() / 2)){
                return v[i];
            }
        } 
    }
}
//better solution of this problem
int GreaterThanHalf(vector<int>arr){
    //we will define a map for this better solution
    map<int, int>mpp;
    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }

    for(auto ite: mpp){
        if(ite.second > (arr.size() / 2)){
            return ite.first;

        }
    }
    return -1;
}
// we will be writing the optimal approach for this problem
int main(){
    cout << "return the number that is greater than n / 2" << endl;
    vector<int>arr = {2,3,4,2,2,2,5};
    // int res = GreaterThanHalf(arr);
    int res =  GH(arr);
    cout << "the result will be the " << res << endl;
    return 0;
}