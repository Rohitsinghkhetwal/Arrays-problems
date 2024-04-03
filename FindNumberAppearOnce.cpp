#include<bits/stdc++.h>
using namespace std;
//the time complexity of this algo is o(n)
int getSingleElement(vector<int>&arr){
    int xorr = 0;
    for(int i = 0; i < arr.size(); i++){
        xorr = xorr ^ arr[i];
    }

    return xorr;
}
int main(){
    cout << "find the number that aapear once" << endl;
    vector<int>arr = {1,1,2,2,3,4,4};
    int result = getSingleElement(arr);
    cout << "Single element that is present in the array is " << result << endl;
    return 0;
}