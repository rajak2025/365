#include <iostream>
#include <vector>
using namespace std;

void printingTraingle(std::vector<std::vector<int>>& tri) {
    int rows = tri.size();
    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            cout << tri[i][j] << "   ";
        }
        cout << endl;
    }
}


int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                triangle[i][j]+= min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        
        return triangle[0][0];
}


int main()
{
    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;
    
    int numbers = (rows*( rows +1 ) ) / 2;
    std::vector<std::vector<int>> tri;

    for(int i = 0 ; i < rows; i++) {
        int j = i+1;
        std::vector<int> temp;
        cout << "Enter row "<< j <<" Elements \n";
        while(j != 0 ) {
            int value;
            cin >> value;
            temp.push_back(value);
            j--;
        }
        tri.push_back(temp);
    }
    
    printingTraingle(tri);

    cout << endl;
    int result = minimumTotal(tri);
    cout << result << endl ; 

    return 0;
}