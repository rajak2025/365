#include <queue>
#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;
#define MAX 100001
#define INF (1<<20)

struct comp {
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;
    }
};

priority_queue<pair<int, int>, vector< pair<int, int> >, comp> Q;
vector< pair<int, int> > G[MAX];
int D[MAX];
bool F[MAX];

int main(void) {
    //Create a graph
    int nodes, edges, u, v, w, starting, sz;

    cout <<  "Enter the number of vertices and edges: ";
    cin >> nodes >> edges;
    cout << "Enter the edges with weight: <source> <destination> <weight>: \n";
    for(int i = 0 ; i < edges; i++) {
        cin >> u >> v >> w;
        G[u].push_back(pair<int, int>(v,w));
        // G[v].push_back(pair(u,w)); // for undirected
    }
    cout << "Enter the source node: ";
    cin >> starting;

    //initialize distance vector
    for(int i = 1; i <= nodes; i++)
        D[i] = INF;
    D[starting] = 0;
    Q.push(pair<int, int>(starting,0));

    // dijkstra
    while(!Q.empty()) {
        u = Q.top().first;
        Q.pop();

        if(F[u])
            continue;
        sz = G[u].size();
        
        for(int i = 0 ; i < sz ; i++) {
            v = G[u][i].first;
            w = G[u][i].second;
            if( !F[v] && D[u] + w < D[v] ) {
                D[v] = D[u] + w;
                Q.push(pair<int, int>(v,D[v]));
            }
        }
        F[u] = 1; //done with u
    }

    //result
    for(int i = 1; i <= nodes; i++) {
        cout << "Node " << i << ", min weight = " << D[i] << endl;
    }

    return EXIT_SUCCESS;
}


/*
Directed Graph
* Indicating pointer towards it
 A --- 10-->*B----2---->D<*
 |          |       /   | |
 3        1 |     8     | 7
   \    /   4   /       9 |
    \  /    |  /        | |
     *C*---/---2------->*E--

*/


/*
-------------Output----------------------
Enter the number of vertices and edges: 5 9
Enter the edges with weight: <source> <destination> <weight>: 
1 2 10
1 3 3
2 3 1
3 2 4
2 4 2
3 4 8
3 5 2
4 5 7
5 4 9
Enter the source node: 1
Node 1, min weight = 0
Node 2, min weight = 7
Node 3, min weight = 3
Node 4, min weight = 9
Node 5, min weight = 5
*/