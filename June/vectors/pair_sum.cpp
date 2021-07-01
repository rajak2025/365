#include<iostream>
#include<vector>
#include<unordered_set>

using std::unordered_set;
using std::vector;
using std::cout;
using std::cin;
#define endl '\n'

int main() {
    vector<int> arr{10,5,2,3,-6,9,11};
    int sum = 4;
    int size = arr.size();
    unordered_set<int> myset;

    // O(n) time
    for(int i = 0 ; i < size; i++) {
        unordered_set<int>::const_iterator found = myset.find(4 - arr[i]);
        if(found == myset.end()) {
            myset.insert(arr[i]);
        } else{
            cout << "Pair is: " << arr[i]<< " "<< *found<<endl;
            break;
        }
    }
    return 0;
}