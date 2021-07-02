#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using std::cin;
using std::cout;
using std::vector;
using std::string;
#define endl '\n'

bool compare(string s1, string s2) {
    if(s1.length() == s2.length()) {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

void subsequence(string s, string o, vector<string> &v){
    //handling base case
    if(s.size() == 0){
        v.push_back(o);
        return;
    }

    char ch = s[0];
    string reduced_input = s.substr(1);
    //includes the current letter
    subsequence(reduced_input, o + ch, v);
    //excludes the current letter
    subsequence(reduced_input, o, v);
}

int main() {
    string s;
    cin>>s;
    vector<string> v;
    string output = "";
    subsequence(s,output,v);
    std::sort(v.begin(), v.end(), compare);
    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}