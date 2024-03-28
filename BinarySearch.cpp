#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector <int> arr, int start, int end, int num){
    //binary search using itrative method 
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == num) {
            return mid;
        }else if(arr[mid] < num){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

//recursive approach of binary search

int recursive(vector<int>arr, int start, int end, int num){

    if(start > end){
        return -1;
    }

    int mid = start + (end - start) / 2;
     if(arr[mid] == num){
            return mid;
    }else if(arr[mid] < num){
         return recursive(arr, mid + 1, end, num);
    } else {
         return recursive(arr, start , mid -1, num);
    }
}

int main(){
    cout << "binary search" << endl;
    vector<int>arr = {3,45,56,67,78,89,90};
    int length = arr.size();
    int num = 56;
    int output = recursive(arr, 0, length, num);
    if(output == -1){
        cout << "No element is found here !";
    }else{
        cout << " The element is => " << output << endl;
    }
    

    return 0;
}