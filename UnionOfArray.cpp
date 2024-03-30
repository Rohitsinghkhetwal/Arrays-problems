#include<bits/stdc++.h>
using namespace std;
vector<int>UnionArr(vector<int>arrOne, vector<int>arrTwo){
    int n1 = arrOne.size();
    int n2 = arrTwo.size();
    set<int>st;

    for(int i = 0; i < n1; i++){
        st.insert(arrOne[i]);
    }

    for(int i = 0; i < n2; i++){
        st.insert(arrTwo[i]);
    }
    vector<int>temp;
    for(auto it: st){
        temp.push_back(it);
    }
    return temp;
}
//optimal solution will be here!
// {1,1,2,2,3,3,4,4,5,6}
// {1,1,2,2,3,3,5,5,7,8}
vector<int>unionOfArr(vector<int>arrOne, vector<int>arrTwo){
    int n1 = arrOne.size();
    int n2 = arrTwo.size();
    int i = 0;
    int j = 0;
    vector<int>UnionArr;
    //loop for comparing and two arrays and pushing into UnionArr array
    while(i < n1 && j < n2){
        if(arrOne[i] <= arrTwo[j]){
            if(UnionArr.size() == 0 || UnionArr.back() != arrOne[i]) {
                UnionArr.push_back(arrOne[i]);
            }
            i++;
        }else{
            if(UnionArr.size() == 0 || UnionArr.back() != arrTwo[j]){
                UnionArr.push_back(arrTwo[j]);
            }
            j++;
        }

    }
    // if any one of two will exshaust so another loop will run here !
    while(j < n2){
        if(UnionArr.size() == 0 || UnionArr.back() != arrTwo[j]){
            UnionArr.push_back(arrTwo[j]);
        }
        j++;
    }

    while(i < n1) {
        if(UnionArr.size() == 0 || UnionArr.back() != arrOne[i]){
            UnionArr.push_back(arrOne[i]);
        }
        i++;
    }

    return UnionArr;


}


int main(){
    cout << "Union of two arrays" << endl;
    vector<int>arrOne = {1,1,2,2,3,3,4,4,5,6};
    vector<int>arrTwo = {1,1,2,2,3,3,5,5,7,8};
    vector<int>result = unionOfArr(arrOne, arrTwo);
    for(auto i: result){
        cout<<  i << endl;
    }
    
    return 0;
}