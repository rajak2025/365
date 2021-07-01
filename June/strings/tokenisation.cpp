#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using std::cin,std::cout,std::string,std::vector;
#define endl '\n'

int main(void) {
    string input;
    getline(cin,input);
    string token;
    vector<string> tokens;
    std::stringstream ss(input);
    while (getline(ss,token,' '))
    {
        /* code */
        tokens.push_back(token);
    }
    for(auto token : tokens){
        cout << token <<endl;
    }
    
    return 0;
}