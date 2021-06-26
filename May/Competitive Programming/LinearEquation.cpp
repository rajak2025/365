/*
Non negative solutions for the given equations
Ex: ax+by = c
Number of paris of (x,y) = Solution
N = number of coeffs(a,b)
2<=N<=5
constant value = c = rhs
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countSol(vector<int> &coeffs, int start, int end, int rhs) {

    //Base case;
    if(rhs == 0)
        return 1;
    
    int res = 0;

    for(int i = start; i <= end; i++) {
        if(coeffs[i] <= rhs)
            res += countSol(coeffs,i, end, rhs-coeffs[i]);
    }
    return res;
}


int main() {

    int N;
    // # of Coefficients;
    cin>>N;
    vector<int> coeffs(N);
    for(int i = 0 ; i < N ; i++)
        cin>>coeffs[i];
    int rhs;
    cin >> rhs;
    cout << countSol(coeffs,0, N-1, rhs);

    return 0;
}


/*
Input:
4   <--N
7 5 3 1 <-- coeffs
8   <--- constant

Output:
6 <-- Solutions
 */


