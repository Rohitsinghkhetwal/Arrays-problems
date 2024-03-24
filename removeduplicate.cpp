#include<bits/stdc++.h>
using namespace std;
int RemoveDuplicate(int arr[], int n){
    int i = 0; 
    for(int k = 1; k < n; k++){
        if(arr[i] != arr[k]){
            arr[i + 1] = arr[k];
            i++;

        }
    }
    return i + 1;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3,3,4,4,4,5,5,5};
    int len = sizeof(arr) /sizeof(arr[0]);
    //int result = RemoveDuplicate(arr, len);
    int t1 = test(arr, len);
    for(int i = 0; i < t1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}