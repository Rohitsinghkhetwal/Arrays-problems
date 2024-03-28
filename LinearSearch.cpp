#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return i;

        }
             
        
    }
    return -1;
}

int main(){
    cout << "Lenear search" << endl;
    int arr[] = {4,3,6,8,4,7,8,1,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 8;
    int res = linearSearch(arr, length, num);
    cout << "result" << res << endl;
    return 0;
}