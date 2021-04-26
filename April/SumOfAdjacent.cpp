#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
    int size;
    cin>>size;
    vector<int> numbers(size);
    for(int i = 0 ; i < size; i++)  {
        cin>>numbers[i];
    }

    for(int i = 0 ; i < size; i++) {
        cout<< accumulate(numbers.begin()+i+1, numbers.end(), 0);
        cout<<" ";
    }    
}