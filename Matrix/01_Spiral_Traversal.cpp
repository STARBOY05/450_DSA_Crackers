#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a matrix of size r*c. Traverse the matrix in spiral form.

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    vector<int> ans;
    int startRow = 0;
    int endRow = r - 1;
    int startCol = 0;
    int endCol = c - 1;
    int count = 0;
    int total = r * c;
    while (count < total)
    {
        // Change cols, row remain constant - (0, 0)(0, 1)(0, 2)(0, 3)
        for (int i = startCol; i <= endCol && count < total; i++)
        {
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        // increment row i.e row=1 now
        startRow++;
        // Change rows, col remain constant - (1, 3)(2, 3)(3, 3)
        for (int i = startRow; i <= endRow && count < total; i++)
        {
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        for (int i = endCol; i >= startCol && count < total; i--)
        {
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        for (int i = endRow; i >= startRow && count < total; i--)
        {
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}

int main()
{
    int r = 4, c = 4;
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};
    vector<int> ans = spirallyTraverse(matrix, r, c);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}