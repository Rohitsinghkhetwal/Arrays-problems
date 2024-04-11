#include<bits/stdc++.h>
using namespace std;
int maximumSubArray(vector<int>&arr){
    int sum = 0;
    int maximum = arr[0];

    for(int i = 0; i < arr.size(); i++){
        sum = sum + arr[i];
        maximum = max(sum, maximum);
        if(sum < 0){
            sum = 0;
        }
    }

    return maximum;
}
int main(){
    cout << "using Kadane algorithms for optimal solution" << endl;
    vector<int>arr = {-2,1,3,-2,-4,5,3};
    int res = maximumSubArray(arr);
    cout << "the maximum will be the " << res << endl;
    return 0;
}