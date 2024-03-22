#include<bits/stdc++.h>
using namespace std;
// 54, 12, 76, 9,78,5,2
// i                   j;
int partition(vector<int>arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high -1 ){
            i++;
        }

        while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j) swap(arr[i], arr[j]);

    }
    swap(arr[low], arr[j]);
    return j;
}
vector<int>qs(vector<int>arr, int low, int high){
    if(low < high){
        int MidIndex = partition(arr, low, high);
        qs(arr, low, MidIndex - 1 );
        qs(arr, MidIndex + 1, high);
    }

}
int main(){
    vector<int>array = {45,34,2,43,23,67,7};
    int length = array.size();
    qs(array, 0, length - 1);
    return 0;
}