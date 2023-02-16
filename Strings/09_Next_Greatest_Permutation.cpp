#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
  int N = 6;
  vector<int> arr = {1, 2, 3, 6, 5, 4};
  nextPermutation(N, arr);
  return 0;
}