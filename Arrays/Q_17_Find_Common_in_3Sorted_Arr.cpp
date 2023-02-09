#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    // code here.
    map<int, int> m;
    for (int i = 0; i < n1; i++)
        if (m[A[i]] == 0)
            m[A[i]]++;
    for (int i = 0; i < n2; i++)
        if (m[B[i]] == 1)
            m[B[i]]++;
    for (int i = 0; i < n3; i++)
        if (m[C[i]] == 2)
            m[C[i]]++;
    vector<int> ans;
    for (auto i : m)
    {
        if (i.second >= 3)
            ans.push_back(i.first);
    };
    return ans;
}

int main()
{
    int A[] = {1, 5, 10, 20, 40, 80};
    int n1 = 6;
    int B[] = {6, 7, 20, 80, 100};
    int n2 = 5;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n3 = 8;
    vector<int> ans = commonElements(A, B, C, n1, n2, n3);
    cout << "Common elements are: ";
    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}