#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given an array of intervals where intervals[i] = [starti, endi],
merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    if (intervals.size() == 0)
        return res;
    // Sort according to start time
    sort(intervals.begin(), intervals.end());
    // Add the first interval in result
    res.push_back(intervals[0]);
    // Start a Loop
    for (int i = 1; i < intervals.size(); i++)
    {
        // Check if end time of process in result < start time of curr interval
        // Yes than push
        if (res.back()[1] < intervals[i][0])
            res.push_back(intervals[i]);
        // No then find max between their end times and store it as process's end time
        else
            res.back()[1] = max(res.back()[1], intervals[i][1]);
    }
    return res;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = merge(intervals);
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++)
            cout << " " << res.at(i).at(j) << " ";
        cout << "]";
    }
    return 0;
}