#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> leftarray(water.size()), rightarray(water.size());
    int max = water[0];
    for(int i = 0 ; i < water.size(); i++) {
        if(max >= water[i]){
            leftarray[i] = max;
        }
        else {
            max = water[i];
            leftarray[i] = max;
        }
    }

    max = rightarray[water.size()-1];
    for(int i = water.size()-1 ; i >= 0; i--) {
        if(max >= water[i]){
            rightarray[i] = max;
        }
        else {
            max = water[i];
            rightarray[i] = max;
        }
    }
/*
    for(int x : leftarray){
        cout << x <<" ";
    }
    cout << endl;
    for(int x : rightarray){
        cout << x <<" ";
    }
*/
    int watertrapped = 0;
    for(int i = 0 ; i < water.size(); i++) {
        watertrapped += (std::min(rightarray[i], leftarray[i]) - water[i]);
    }
    cout << watertrapped;
    return 0;
}