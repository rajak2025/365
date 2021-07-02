#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
using std::cout;
using std::cin;
#define endl '\n'

int highest_mountain(vector<int> &arr) {
    int n = arr.size();
    int largest = 0;
    for(int i = 1; i < n-1;){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            int count = 1;
            int j = i; 
            while(j>=1 and arr[j]>arr[j-1]){
                j--;
                count++;
            }
            while(i<n-1 && arr[i]>arr[i+1]){
                i++;
                count++;
            }
            largest = std::max(largest,count);
        }
        else{
            i++;
        }
    }
    return largest;
}

int main(void) {
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout << highest_mountain(arr);
    return 0;
}