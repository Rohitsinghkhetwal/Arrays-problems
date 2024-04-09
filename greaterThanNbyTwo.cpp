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
//in this optimal solution we will be using moore's votion algorithm
int GreaterThanNbyTwo(vector<int>ar){
    int count = 0;
    int element;
    for(int i = 0; i < ar.size(); i++){
        if(count == 0){
            count++;
            element = ar[i];
        }else if(ar[i] == element){
            count++;
        }else{
            count--;
        }
    }  
    int counter = 0;
    for(int i = 0; i < ar.size(); i++){
        if(ar[i] == element) counter++;
    }
    if(counter > (ar.size()) / 2){
        return element;

    }

    return -1;
}

int main(){
    cout << "return the number that is greater than n / 2" << endl;
    vector<int>arr = {2,3,4,2,2,2,5};
    // int res = GreaterThanHalf(arr);
    int res =  GreaterThanNbyTwo(arr);
    cout << "the result will be the " << res << endl;
    return 0;
}