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

string extract_token(string str, int key){
    //string tokenizer
    char * s = strtok((char *)str.c_str(), " ");
    while(key>1){
        s =strtok(NULL," ");
        key--;
    }
    return (string)s;
}
int convertToInt(string a){
    int base =1;
    int ans = 0;
    for(int i = a.length()-1; i>=0 ; i--){
        ans += ((a[i]-0)*base);
        base = base*10;
    }
    return ans;
}


//Here stoi() does only for numbers with base 10, we need to write a userdefined ConverToInt Function
//Numeric Comparision of the pair
bool numericCompare(std::pair<string,string> s1, std::pair<string,string> s2){
    return convertToInt(s1.second) < convertToInt(s2.second);
}

bool lexoCompare(std::pair<string,string> s1, std::pair<string,string> s2){
    return stoi(s1.second) < stoi(s2.second);
}

int main(){
    int N;
    cin>>N;
    cin.get();
    string temp;
    vector<string> v;
    for(int i = 0 ;i < N; i++){
        getline(cin,temp);//includes white spaces
        v.push_back(temp);
    }
    int key;
    cin>>key;
    string rev, comparision;
    cin>>rev>>comparision;

    //Now for the given key we make key and value pairs
    vector<std::pair<string,string> >vp;
    for(int i = 0 ; i < N ; i++) {
        vp.push_back({v[i], extract_token(v[i], key)});
    }

    //Sorting that is comparision
    if(comparision=="numeric"){
        std::sort(vp.begin(),vp.end(), numericCompare);
    }
    else{
        std::sort(vp.begin(), vp.end(), lexoCompare);
    }

    if(rev=="true"){
        std::reverse(vp.begin(), vp.end());
    }

    for(int i = 0 ; i < N ; i++) {
        cout << vp[i].first << endl;
    }
    return 0;
}
