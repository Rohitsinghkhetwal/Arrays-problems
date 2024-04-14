#include<bits/stdc++.h>
using namespace std;
vector<int>ArrangeVal(vector<int>&arr){
    int n = arr.size();
    vector<int>res(n, 0);
    int posInd = 0, negativeInd = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            res[negativeInd] = arr[i];
            negativeInd += 2; 

        }else{
            res[posInd] = arr[i];
            posInd += 2;

        }
    }
    return res;

}
int main(){
    cout << "Rearrage the value by sign" << endl;
    vector<int>arr = {3,1,-2, -5, 2, -4};
    vector<int>res = ArrangeVal(arr);
    for(auto it: res){
        cout << it << endl;
    }
    return 0;
}