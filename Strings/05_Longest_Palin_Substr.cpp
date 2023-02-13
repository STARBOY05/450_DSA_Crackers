#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
Palindrome string: A string which reads the same backwards.
More formally, S is palindrome if reverse(S) = S. Incase of conflict, return the substring which occurs first ( with the least starting index).

Example 1:

Input:
S = "aaaabbaa"
Output: aabbaa
Explanation: The longest Palindromic
substring is "aabbaa".
*/

string longestPalin(string S)
{
    // code here
    if (S.length() == 1)
        return S;
    string ans = "";
    int maxLen = 0, left = -1, right = -1;
    for (int i = 0; i < S.length(); i++)
    {
        left = i, right = i;
        // ODD LENGTH
        while (left >= 0 && right < S.length() && S[left] == S[right])
        {
            if (right - left + 1 > maxLen)
            {
                ans = S.substr(left, right + 1);
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
        // EVEN LENGTH
        left = i, right = i + 1;
        while (left >= 0 && right < S.length() && S[left] == S[right])
        {
            if (right - left + 1 > maxLen)
            {
                ans = S.substr(left, right + 1);
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }
    return ans;
}

int main()
{
    string test = "aaaabbaa";
    cout << longestPalin(test);
    return 0;
}