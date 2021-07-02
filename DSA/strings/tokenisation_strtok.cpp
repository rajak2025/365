#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstring>
using std::cin,std::cout,std::string,std::vector;
#define endl '\n'

//strtok() used for character arrays
//it always prints tokens from starting and delimits with the particular character, so we need to have a state to traverse the entire string
//it ends when we encounter NULL 
int main() {
    char str[1000];
    cin.getline(str,1000);
    char *token = strtok(str," ");

    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL," ");
    }
    return 0;
}
