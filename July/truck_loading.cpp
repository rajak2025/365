#include<iostream>
#include<queue>
#include<vector>
using std::cout, std::cin, std::queue, std::vector;
#define endl '\n'


int main(){
    int N,t;
    std::priority_queue<int, vector<int>, std::greater<int> > parts;

    cin >> N;
    for(int i = 0 ; i < N; i++) {
        cin>>t;
        parts.push(t);
    }
    // std::priority_queue<int, vector<int> , std::greater<int>> temp = parts;
   
    // while(!temp.empty()){
    //     cout << ' ' << temp.top() << endl;
    //     temp.pop();
    // }

    int cost = 0;
    while(!parts.empty()){
        if(parts.size() == 1 ){
            break;
        }
        int a = parts.top();
        parts.pop();
        int b = parts.top();
        parts.pop();
        int sum = (a + b);
        parts.push(sum);
        cost += sum;
        // cout << "Cost Value till now :  " << cost << endl;
        // std::priority_queue<int, vector<int> , std::greater<int>> temp = parts;

        // cout << endl;    
        // while(!temp.empty()){
        //     cout << ' ' << temp.top() << endl;
        //     temp.pop();
        // }
        // cout << endl;
    }
    cout << cost;
    return 0;
}