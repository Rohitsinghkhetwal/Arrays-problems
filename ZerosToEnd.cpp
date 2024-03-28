#include<bits/stdc++.h>
using namespace std;
// vector<int>moveZero(vector<int>arr, int n){
//     vector<int>temp;
//     for(int i = 0; i < n; i++){
//         if(arr[i] !=  0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int index = temp.size();
//     cout << " the number of indexes in temp are =>" << index << endl;

//     for(int i = 0; i < index; i++){
//         arr[i] = temp[i];
//     }

//     for(int i = index; i < n; i++){
//         arr[i] = 0;
//     }


    

//     return arr;
// }
// brute force solution here !
vector<int>Zero(vector<int>arr, int n){
    vector<int>temp;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    
    for(int i = temp.size(); i < n; i++){
        arr[i] = 0;
    }

    return arr;
}
// optimal solution

vector<int>moveZeroToEnd(vector<int>arr, int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return arr;
    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }

    }

    return arr;
}
int main(){
    
    vector<int>array = {0,4,0,9,0,9,0,3,0,7,9,6,4};
    int len = array.size();
    cout << " length" << len << " ";
    vector<int>result = moveZeroToEnd(array, len);
    for(auto &it: result){
        cout << it << "";
    }
    cout << "\n";
    return 0;
}