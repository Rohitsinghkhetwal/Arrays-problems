#include<bits/stdc++.h>
using namespace std;
//brute force algoritm
bool CheckArr(int arr[], int n){
    for(int i = 0; i < n; i++){
       for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[i]){
            return false;
        }
       }
    }

    return true;
}

// trying for optimal
bool checkIfArrayisSorted(int arr[], int n){
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }

    return true;

}
int main(){
    int arr[] = {9, 8,7,6,5,4,3,2,1};
    int length = sizeof(arr) / sizeof(arr[0]);
    bool res = checkIfArrayisSorted(arr, length);
    if(res) cout << "true" << endl;
    else cout << "false" << endl;
    cout << " is this is result "<< res;
    return 0;
}