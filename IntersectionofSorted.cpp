#include<bits/stdc++.h>
using namespace std;
vector<int>Intersection(vector<int>a, vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    //1,2,2,4,4,5,5,6,7
    //1,2,5,6,7,8 
    //brute force algorithm for finding the intersection of two arrays
    vector<int>ans;
    int vist[n2] = {0};
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] == b[j] && vist[j] == 0){
                ans.push_back(a[i]);
                vist[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}
// time complexity of this algorithm will be O(n1 X n2) O(n2)
int main(){
    cout << " Intersection of two arrays" << endl;
    vector<int>arrOne = {1,1,2,2,3,3,4,4,5,6};
    vector<int>arrTwo = {1,1,2,2,3,3,5,5,7,8};
    vector<int>result = Intersection(arrOne, arrTwo); 
    for(auto i: result){
        cout << i << endl;
    }
    return 0;
}