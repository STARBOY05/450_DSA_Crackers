#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int col = m - 1;
    int row = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = col; j >= 0; j--)
        {
            if (arr[i][j] == 1)
            {
                row = i;
                col--;
            }
            else
                break;
        }
    }
    return row;
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 1, 1},
                                  {0, 0, 1, 1},
                                  {1, 1, 1, 1},
                                  {0, 0, 0, 0}};
    cout << rowWithMax1s(matrix, 4, 4);
    return 0;
}