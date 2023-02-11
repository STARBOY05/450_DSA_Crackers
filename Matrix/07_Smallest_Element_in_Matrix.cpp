#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int mat[4][4], int n, int k)
{
    // Your code here
    vector<int> flat;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            flat.push_back(mat[i][j]);
    }
    sort(flat.begin(), flat.end());
    return flat[k - 1];
}

int main()
{
    int mat[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {24, 29, 37, 48}, {32, 33, 39, 50}};
    cout << kthSmallest(mat, 4, 7);
    return 0;
}