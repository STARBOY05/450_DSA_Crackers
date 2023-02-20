#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string convertSeqToNum(string numkeypad[], string input)
{
    string out = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            out += "0";
        }
        else
        {
            int pos = input[i] - 'A';
            out += numkeypad[pos];
        }
    }
    return out;
}

int main()
{
    string numkeypad[] = {"2", "22", "222", "3", "33", "333", "4",
                          "44", "444", "5", "55", "555", "6", "66",
                          "666", "7", "77", "777", "7777", "8", "88",
                          "888", "9", "99", "999", "9999"};
    string input = "ALISTAIR";
    cout << convertSeqToNum(numkeypad, input);
    return 0;
}