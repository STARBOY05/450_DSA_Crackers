// Given an NxN matrix Mat. Sort all elements of the matrix
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
{
    // code here
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            v.push_back(Mat[i][j]);
    }
    sort(v.begin(), v.end());
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Mat[i][j] = v[k];
            k++;
        }
    }
    return Mat;
}

int main()
{
    vector<vector<int>> matrix = {{10, 20, 30, 40},
                                  {15, 25, 35, 45},
                                  {27, 29, 37, 48},
                                  {32, 33, 39, 50}};
    vector<vector<int>> ans = sortedMatrix(4, matrix);
    for (auto i : ans)
    {
        for (auto x : i)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}