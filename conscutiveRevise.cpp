#include<bits/stdc++.h>
using namespace std;
int conscutiveNumber(vector<int>arr, int n){
    int count = 0; 
    int maxcount = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            maxcount = max(count, maxcount);

        }else{
            count = 0;
        }
    }
    return maxcount;
}
int main(){
    cout << "Sort an array of Zero's and ones ";
    vector<int>arr = {2,3,2,1,1,1,5,67};
    int len = arr.size();
    int result = conscutiveNumber(arr, len);
    cout << " answar will be the " << result << end

    
    return 0;

}