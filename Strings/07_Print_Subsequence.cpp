#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsequence(int i, string st, string temp)
{
    if (i == st.length())
    {
        cout << temp << " ";
        return;
    }
    // Pick
    temp += st[i];
    subsequence(i + 1, st, temp);
    // Backtrack
    temp.pop_back();
    subsequence(i + 1, st, temp);
}

int main()
{
    string st = "abc";
    string temp = "";
    subsequence(0, st, temp);
    return 0;
}