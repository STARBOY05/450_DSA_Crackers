#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permute(string st, int l, int r)
{
    if (l == r)
        cout << st << endl;
    for (int i = l; i < r; i++)
    {
        swap(st[l], st[i]);
        permute(st, l + 1, r);
        swap(st[l], st[i]);
    }
}

int main()
{
    string st = "ABC";
    int n = st.size();
    permute(st, 0, n);
    return 0;
}