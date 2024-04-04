#include<bits/stdc++.h>
using namespace std;
// the brute force solution  has o(n^2) time complexity so we can optimize it 
bool TwoSumProblemBrute(vector<int>&arr, int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                return true;;
            }
        }
    }
    return false;

}

//now there is a optimal solution of two pointer approach let's see
bool TwoSumProblemOptimal(vector<int>arr, int n, int target){
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
       if(sum == target){
        return true;
       }else if(sum < target){
        left++;
       }else{
        right--;
       }
    }
    return false;

}
int main(){
    cout << "2 sum problem " << endl;
    vector<int>arr = {9, 3, 1, 2, 4,6,2,8};
    int length = arr.size();
    int target = 14;
    bool result = TwoSumProblemOptimal(arr, length, target);
    if(result){
        cout << "YES , there exist the pair of sum = "<< target << endl;
    }else{
        cout << "NO , pair not found here = " << target << endl; 
    }
    
    return 0;
}