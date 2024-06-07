#include <bits/stdc++.h>
using namespace std;

bool checkIfNumberIsSorted (vector<int>&arr , int i) {
    //base case
    if(i == arr.size() -1){
        return true;
    }       
    if(arr[i] > arr[i + 1]) {
        return false;
    }

    //recursively check for remaining number
    return checkIfNumberIsSorted(arr, i + 1);

}
int main()
{
    cout << " Check if Array is sorted or not" << endl;
    vector<int>arr =  {1,3,5,6,7,43};
    int length = arr.size();
    bool result = checkIfNumberIsSorted(arr, 0);
    if(result) {
        cout << "The Array is sorted ====>";
    }else {
        cout << " This array is not sorted";
    }
    return 0;
}