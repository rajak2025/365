#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>
using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::string;
#define endl '\n'


int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
    int j =0;
    for(int i = 0; i < s1.length() ; i++){
        if(s1[i] == s2[j]){
            j++;
        }
    }
    if(j == s2.length()) {
        cout << "Found" ;
    }
    else{
        cout << "Not Found";
    }
    return 0;
}