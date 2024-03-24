#include<bits/stdc++.h>
using namespace std;

void leftRotateBydValue(int arr[], int n, int d){
    // prevention for greater than d value
    d = d % n;
    int temp[d];

    for(int i = 0; i < d; i++){
           temp[i] = arr[i];
    }

    // shifting 
    for(int i = d; i < n; i++){
        //suppose d = 3, so i = d , 3-3 = 0, 4-3=1, 5-3=2
        arr[i - d] = arr[i];
    }

    // putting the value suppose n = 7, n-d will start from where we want to put the value
    // we have to start from 4th index of arr[i]

    for(int i = n - d; i < n; i++){
        arr[i] = temp[i-(n - d)];
    }


}
int main(){
    int arr[] = {3,4,5,12,4,23,87,98};
    int length = sizeof(arr)/ sizeof(arr[0]);
    int d = 5;
    leftRotateBydValue(arr, length, d);
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}