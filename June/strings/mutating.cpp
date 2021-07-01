#include<iostream>
#include<cstring>
using std::cout,std::cin,std::string;

int main(){
    char str[1000];
    cin.getline(str,1000,'\n');
    //replacing space with '%20'
    //char replacestr[4] = "%20";
    int spaces = 0;
    for(int i =  0 ; i < strlen(str); i++){
        if(str[i] == 32)
            spaces++;
    }
    //24 + (3*4) - 4
    //24+12-4
    //32
    int total_length = strlen(str) + 2*spaces; 
    str[total_length] = '\0';
    for(int i = strlen(str) -1 ; i>=0 ; i--){
        if(str[i] == 32){
            str[total_length-1] = '0';
            str[total_length-2] = '2';
            str[total_length-3] = '%';
            total_length -= 3;
        }
        else {
            str[total_length - 1] = str[i];
            total_length--;
        }
    }
    cout << str;
    return 1;
}