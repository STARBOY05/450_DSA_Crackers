#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Write an efficient program to print all the duplicates and their counts in the input string

void checkDuplicates(string st)
{
    map<char, int> mp;
    for (int i = 0; i < st.length(); i++)
        mp[st[i]]++;
    for (auto i : mp)
    {
        if (i.second > 1)
            cout << "Letter-" << i.first << " count-" << i.second << endl;
    }
}

int main()
{
    string test = "geeksforgeeks";
    checkDuplicates(test);
    return 0;
}