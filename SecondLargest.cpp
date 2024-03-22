#include<bits/stdc++.h>
using namespace std;
int Slargest(int arr[], int n){
    int Slarge = -1;
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(largest < arr[i]){
            Slarge = largest;
            largest = arr[i];
            
        }else if(arr[i] > Slarge && arr[i] != largest){
            Slarge = arr[i];
        }
    }

    return Slarge;
}
int main(){
    int arr[] = {4,34,32,23,65,33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = Slargest(arr, size);
    cout << " Second largest Number " << result << " ";

    return 0;
}