#include <bits/stdc++.h>
using namespace std;
int LinearSearchRecursive(vector<int>arr, int index, int value) {
    //base case
    if(index == arr.size() -1) {
        return 0;
    }

    if(arr[index] == value) {
        return index;
    }

    // go to next array elements recursively
    return LinearSearchRecursive(arr, index + 1, value);
}
int main()
{
    cout << " Lenear search with recursion" << endl;
    vector<int>arr = {3,4,77,55,67,89,90,97};
    int value = 67;
    int result = LinearSearchRecursive(arr,0, value);
    cout << "The index of a value is" << result << endl;
    return 0;
}