#include<bits/stdc++.h>
using namespace std;
//brute force of the missing number algorithm
int findMissingNumber(int arr[], int n){
    for(int i = 1; i < n; i++){
        int flag = 0;
        for(int j = 0; j< n -1; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }

}

//optimal solution is here !
int missingNumber(int arr[], int n){
    
}
int main(){
    cout << "Find the missing number " << endl;
    //find the missing number 
    int arr[] = {1,2,4,5};
    int n = 5;
    int result = findMissingNumber(arr, n);
    cout << "The missing number is " << result << endl;

    return 0;
}