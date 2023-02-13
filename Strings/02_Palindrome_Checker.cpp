#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Given a string S, check if it is palindrome or not.

bool check(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s)  return true;
    return false;
}

int main()
{
    string s1 = "ABBA";
    if(check(s1))   cout << "STRING IS PALINDROME";
    else    cout << "STRING IS NOT PALINDROME";
    return 0;
}