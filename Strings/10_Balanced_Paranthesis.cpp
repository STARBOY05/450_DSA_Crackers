#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // Your code here
    int n = x.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '(' or x[i] == '[' or x[i] == '{')
        {
            st.push(x[i]);
        }
        else if (x[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
                st.pop();
            else
                return false;
        }
        else if (x[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
                st.pop();
            else
                return false;
        }
        else if (x[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
                st.pop();
            else
                return false;
        }
    }
    if (!st.empty())
        return false;
    return true;
}

int main()
{
    string str= "{([])}";
    cout << ispar(str);
    return 0;
}