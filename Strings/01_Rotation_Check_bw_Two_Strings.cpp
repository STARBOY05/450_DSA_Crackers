#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkString(string &s1, string &s2, int indexFound, int Size)
{
    for (int i = 0; i < Size; i++)
    {
        if (s1[i] != s2[(indexFound + i) % Size])
            return false;
    }
    return true;
}

int main()
{
    string s1 = "ABCD", s2 = "CDAB";
    vector<int> idxes;
    char firstChar = s1[0];
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2[i] == firstChar)
            idxes.push_back(i);
    }
    bool isRotation = false;
    for (int idx : idxes)
    {
        isRotation = checkString(s1, s2, idx, s1.size());
        if (isRotation) cout << "Rotation found";
    }
    return 0;
}