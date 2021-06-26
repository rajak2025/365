#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int N;
    cin>> N;
    vector<int> coins(N);
    for(int i = 0 ; i < N ; i++)
    {
        cin >> coins[i];
    }
    int desired;
    cin >> desired;
    int change = 0;
    sort(coins.begin(), coins.end());
    for(int i = N-1; i >=0 ;) {
        if(coins[i] <= desired) {
            desired = desired - coins[i];
            change++;
            i = N-1;
        }
        else if(desired == 0) {
            break;
        }
        else {
            i--;
        }
        
    }
    cout << change;
    return 0;
}


/*
X = 18
X = X - MAX(1,3,5,7)
X = 18 - 7
X = 11 - 7
X = X - MAX(1,3,5,7)
X = 4 - 3
X = Max(1,3,5,7)
X = 1
*/