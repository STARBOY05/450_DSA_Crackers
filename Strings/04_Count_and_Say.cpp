#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring contains exactly one unique digit.
Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.
For example, the saying and conversion for digit string "3322251":
*/

string countandsay(string s = "1")
{
    // Base Case
    if (s == "1")
        return s;
    int i=0, j, len=s.size();
    string ans="";

    while(i < len){
        // Current Number
        j = i;
        // Check Repeatition
        while(i < len && s[i] == s[j])
            i++;
        // Add count=i-j + number to answer
        ans += to_string(i-j) + s[j];
    }
}

int main()
{
    string test = "3322251";
    countandsay(test);
    return 0;
}