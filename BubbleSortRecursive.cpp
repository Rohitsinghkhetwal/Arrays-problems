#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr, int n){
    //base case
    if(n == 0) return;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }

    }
    //it will reduce to 1 from length of an array when function will call 
    //when it will become 0 base case will hit and function will terminated ~
    BubbleSort(arr, n -1);
}

int main(){
    vector<int>arr = {21,43,32,22,21,3,23,1};
    int len = arr.size();
    BubbleSort(arr, len);
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }

    return 0;
}