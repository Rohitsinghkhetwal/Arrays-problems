#include<bits/stdc++.h>
using namespace std;
int LongestSubarraywithSumK(vector<int>arr, long long k){
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    int n = arr.size();
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxLen;
//r 1
// n 10
}
int main() {
    cout << "Longest Subarray" << endl;
    vector<int>arr = {1,2,5,1,1,1,1,1,1};
    long long k = 5;
    int result = LongestSubarraywithSumK(arr, k);
    cout << "the largest subarray is " << result << endl;
    return 0;
}