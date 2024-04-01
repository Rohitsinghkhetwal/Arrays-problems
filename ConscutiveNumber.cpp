#include<bits/stdc++.h>
using namespace std;
int conscutiveOnes(vector<int>&arr){
    int maxCount = 0;
    int count = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(maxCount, count);
        }else{
            count = 0;
        }
    }
    return maxCount;
}

int main(){
    cout << "Finding the conscutive number" << endl;
    vector<int>arr = {1,1,1,4,5,6,1,1,1,1,1,1};
    int result = conscutiveOnes(arr);
    cout << "The value of the number is " << result << endl;
    
    
    return 0;
}