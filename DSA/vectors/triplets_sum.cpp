#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
using std::cout;
using std::cin;
#define endl '\n'

vector<vector<int>> result;

void pair(vector<int> &arr, int pos, int remaining_sum, int &temp){
    int first = pos;
    int last = arr.size()-1;
    while(first<last){
        if(arr[first]+arr[last] == remaining_sum) {
            result.push_back({temp,arr[first], arr[last]});
            first++;
            last--;
        }
        else if(arr[first]+arr[last] > remaining_sum) {
            last--;
        }
        else if(arr[first]+arr[last] < remaining_sum) {
            first++;
        }
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
    int target = 18;
    std::sort(arr.begin(), arr.end());
    int size = arr.size();

    for(int i = 0 ; i < size-2; i++) {
        //(vector, start position, remaining sum, first value)
        pair(arr,i+1, target-arr[i], arr[i]);
    }
    
    if(result.size() != 0) {
        for(auto x : result) {
            for(auto i : x){
                cout << i << " ";
            }
            cout << endl;
        }
    }    
    return 0;
}