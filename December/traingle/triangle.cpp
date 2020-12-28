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


int main()
{
    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

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

    return 0;
}