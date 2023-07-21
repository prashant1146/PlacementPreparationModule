#include <bits/stdc++.h>
using namespace std;

//    N MEETINGS IN ONE ROOM

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> op;
    pair<int, int> temp;
    for (int i = 0; i < n; i++)
    {
        temp.first = end[i];
        temp.second = start[i];
        op.push_back(temp);
    }
    sort(op.begin(), op.end());
    int count = 1;
    int prevtime = op[0].first;
    for (int i = 1; i < n; i++)
    {
        if (prevtime < op[i].second)
        {
            prevtime = op[i].first;
            count++;
        }
    }
    return count;
}