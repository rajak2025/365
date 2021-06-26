#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
using std::cout;
using std::cin;
#define endl '\n'

int countMinswaps(vector<int> arr) {
    int n = arr.size(), ans=0;
    std::pair<int,int> ap[n];
    for(int i = 0 ; i<n ;i++) {
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    sort(ap, ap+n);

    vector<bool> visited(n,false);

    for(int i = 0 ; i < n ; i++) {

        int old_position = ap[i].second;
        if(visited[i]=true || old_position==i){
            continue;
        }

        int node = i;
        int cycle = 0;

        while(!visited[node]){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle +=1;
        }
        ans +=(cycle -1);
    }
    return ans;
}

int main(void) {
    vector<int> arr{5,4,3,2,1};
    cout << countMinswaps(arr)<<endl;
    return 0;
}