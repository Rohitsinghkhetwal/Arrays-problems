#include<bits/stdc++.h>
using namespace std;
void SortanArrayofOneandZero(vector<int>&arr, int n){
    //it's three poninter approach so we have to take three pointer
    //basically we are solving this question by dutch national flag algorithm
    int low = 0, mid = 0, high =  n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
//time complexity of this algorithm is O(n);
int main(){
    cout << "sort an array of zeros and ones !" << endl;
    vector<int>arr = {0,2,1,2,0,0,2,1,2,0};
    int length = arr.size();
    SortanArrayofOneandZero(arr, length);

    //printing the sorted array
    for(int i = 0; i < length; i++){
        cout << arr[i];
    }
    return 0;
}