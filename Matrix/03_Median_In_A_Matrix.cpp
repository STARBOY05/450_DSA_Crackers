#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int R, int C)
{
    // code here
    vector<int> flat;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            flat.push_back(matrix[i][j]);
        }
    }
    sort(flat.begin(), flat.end());
    int n = flat.size();
    // If length of array is even
    if (n % 2 == 0)
    {
        int z = n / 2;
        int e = flat[z];
        int q = flat[z - 1];
        int ans = (e + q) / 2;
        return ans;
    }

    // If length if array is odd
    else
    {
        int z = round(n / 2);
        return flat[z];
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << median(matrix, 3, 3);
    return 0;
}