#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct CustomersCount {
        string name;
        int count = 0;  
};

int Present(CustomersCount p[] , string x, int size) {
    
    for(int i = 0 ; i < size ; i++) {
        if(p[i].name == x) {
            return i;
        }
    }
    return -1;
}

vector<string> mostActive(vector<string> customers) {
    
    CustomersCount p[customers.size()];    
    vector<string> result;
    int minValue = (38.0/100)*customers.size();
    
    int  noOfStructs = 0 ;
    for(string x : customers) {
    
        if(noOfStructs == 0 ) {
            p[noOfStructs].name = x;
            p[noOfStructs].count++;
            noOfStructs++;
        }
        
        int m = Present(p,  x, noOfStructs);
        if(m != -1 )
                p[m].count++;
        else {
            p[noOfStructs].name = x;
            p[noOfStructs].count++;
            noOfStructs++;    
        }
    }

    for(int i = 0 ; i < noOfStructs ; i++) {
        if(p[i].count >= minValue) {
            result.push_back(p[i].name);
        }
    }

    sort(result.begin(), result.end())
    
    return result;
}

int main(void) {

    vector<string> customers;
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja");
    customers.push_back("raja"); //8
    customers.push_back("rama"); 
    customers.push_back("rama");
    customers.push_back("rama");
    customers.push_back("rama");
    customers.push_back("rama");
    customers.push_back("rama"); //6
    customers.push_back("suchi");
    customers.push_back("suchi");
    customers.push_back("suchi");
    customers.push_back("suchi");
    customers.push_back("suchi");
    customers.push_back("suchi"); //6

    vector<string> res = mostActive(customers);

    for(string x : res) {
        cout<< x <<" ";
    }
    cout<<customers.size()<<" ";
    cout<<res.size();


    return 1;
}
