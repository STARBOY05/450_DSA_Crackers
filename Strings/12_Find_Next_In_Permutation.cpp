#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of numbers.
If such arrangement is not possible, it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.
Input: N = 6
arr = {1, 2, 3, 6, 5, 4}
Output: {1, 2, 4, 3, 5, 6}
Explaination: The next permutation of the
given array is {1, 2, 4, 3, 5, 6}.
*/
vector<int> nextPermutation(int N, vector<int> arr)
{
    bool res = next_permutation(arr.begin(), arr.end());
    if (res)
        return arr;
    else
    {
        sort(arr.begin(), arr.end());
        return arr;
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 6, 5, 4};
    vector<int> res = nextPermutation(arr.size(), arr);
    for (auto i : res)
        cout << i << " ";
    return 0;
}