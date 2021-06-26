#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using std::vector;
using std::unordered_set;
using std::cout;
using std::cin;
#define endl '\n'


int main(void) {
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};
    vector<vector<int>> bands;
    unordered_set<int> myset{1,9,3,0,18,5,2,4,10,7,12,6};
    int largest = 0;
    for(int i = 0 ;i < myset.size();i++){
        unordered_set<int>::const_iterator found = myset.find(arr[i]-1);
        if(found == myset.end()){
            int band = 1;
            int j=1;
            vector<int> temp;
            temp.push_back(arr[i]);
            while(1){
                unordered_set<int>::const_iterator found = myset.find(arr[i]+j);
                if(found == myset.end())
                    break;
                else{
                    temp.push_back(arr[i]+j);
                    j++;
                    band++;
                }                
            }
            bands.push_back(temp);
            largest = std::max(band,largest);
        }
    }
    cout << largest <<endl;
    for(auto x : bands) {
        for(auto i: x){
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
}
