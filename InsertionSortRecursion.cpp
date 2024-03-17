#include<bits/stdc++.h>
using namespace std;

//45 54 23 22 6 5

void InsertionSort(vector<int> &arr, int n){
    for(int i = 0; i < n; i++ ){
        int j = i;
        while(arr[j] < arr[ j -1] && j > 0){
            int temp = arr[j];
            arr[j] = arr[ j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

}

void InsertionSortRec(vector<int>&arr,int start, int n){
    //base case 
    if(start == n) return;
    int j = start;
    while(arr[j] > arr[j -1] && j > 0){
        int temp = arr[j + 1];
        arr[ j+1] = arr[j];
        arr[j] = temp;
    }
    InsertionSortRec(arr, start + 1, n);

   
    
}

int main(){
    vector<int>arr = {32,54,32,21,9,4,2};
    int length = arr.size();
    InsertionSort(arr, 0, length);
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}