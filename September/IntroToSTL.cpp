#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

using namespace std;


bool f(int x, int y) {
    return x<y;
}


void vectorOperations() {
    vector<int> A = {4,1,3,2};

    //    cout<<A[1]<<endl;

    sort(A.begin(), A.end());   //O(NlogN)
    for(int i = 0 ; i < A.size() ; i++) {
    //    cout<<A[i];
    }
    //cout<<endl;

    //1,2,3,4

    bool present = binary_search(A.begin(), A.end(), 5);
    //cout<<present<<endl;
    //1

    A.push_back(5);
    present = binary_search(A.begin(), A.end(), 5);
    //cout<<present<<endl;
    //0

    vector<int>::iterator it = lower_bound(A.begin(), A.end(),3);

    //cout<<*it;
    //3

    sort(A.begin(), A.end(), f); //passed comparator

    for(int i = 0 ; i < A.size(); i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it3;

    for(it3 = A.begin() ; it3 != A.end() ; it3++) {
        cout<<*it3<<" ";
    }
    cout<<endl;

}


void setOperations() {
    set<int> s; // T = O(logn)
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(22);

    for(int x : s) {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it = s.find(1);

    if(it == s.end()) {
        cout<<"Not Present"<<endl;
    }
    else {
        cout<<"Present"<<endl<<*it<<endl;
    }

    auto it2 = s.lower_bound(1);
    auto it3 = s.upper_bound(1);

    cout<<*it2<<endl;
    cout<<*it3<<endl;

    s.erase(22);

    for(auto x : s) {
        cout<<x;
    }
}

void mapoperations() {
    map<int, int> A;
}

int main(void) {

    powerOfSTL();
}