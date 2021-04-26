#include<iostream>
#include<vector>
using namespace std;

int main() {
    int days;
    cin >> days;
    vector<int> stockPrice(days);
    for(int i = 0 ; i < days ;i ++) {
        cin >> stockPrice[i];
    }
    cout<<1<<" ";
    int output = 0;
    for(int i = 1 ; i < days; i++) {
        for(int j = i; j >=0 ; j--)
        {
            if(stockPrice[i]>=stockPrice[j]) {
                output++;
            }
            else {
                break;
            }
        }
        cout << output << " ";
        output = 0;
    }
}