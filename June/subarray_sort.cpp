#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using std::vector;
using std::cout;
using std::cin;
#define endl '\n'

bool outOfOrder(vector<int> &arr, int i){
    int x = arr[i];
    if(i==0){
        return x>arr[1];
    }
    if(i==arr.size()-1){
        return x < arr[i-1];
    }
    return x>arr[i+1] or x<arr[i-1];
}


std::pair<int,int> subarraysort(vector<int> &arr) {
    int n = arr.size();
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=1;i<n;i++){
        int x = arr[i];
        if(outOfOrder(arr,i)){
            smallest = std::min(smallest,x);
            largest = std::max(largest,x);
        }
    }

    if(smallest==INT_MAX){
        return {-1,-1};
    } 

    //finding positions
    int left = 0;
    while(smallest >= arr[left]){
        left++;
    }
    int right = arr.size()-1;
    while(largest<=arr[right]){
        right--;
    }
    return {left,right};

}

int main(void) {
    vector<int> arr{1,2,3,4,5,8,6,7,9,10,11};
    auto p = subarraysort(arr);
    cout << p.first << " " << p.second;
    return 0;
}