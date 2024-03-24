#include<bits/stdc++.h>
using namespace std;

vector<int> LeftRotate(vector<int>&arr, int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }

    arr[ n -1 ] = temp;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int length = arr.size();
    int n = 2;
    LeftRotate(arr, length);
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}