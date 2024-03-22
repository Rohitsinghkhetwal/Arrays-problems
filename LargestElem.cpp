#include<bits/stdc++.h>
using namespace std;
int largestArr(int arr[], int n){
    int largest = arr[0];  
    for(int i = 0; i < n; i++){   
        if(arr[i] >  largest){
            largest = arr[i];
        } 
    } 
    return largest;
}

int main(){
    int arr[] = {5,4,3,2,56,3,43};
    int length = sizeof(arr) / sizeof(arr[0]);
    int res = largestArr(arr, length -1 );
     cout << " largest Number   " << res << " ";
    return 0;
}