#include <bits/stdc++.h>
using namespace std;

//  SUBSET SUMS

void solve(vector<int> &arr, int N, vector<int> &ans, int ind, int sum)
{
    // base case
    if (ind == N)
    {
        ans.push_back(sum);
        return;
    }

    // pick
    sum += arr[ind];
    solve(arr, N, ans, ind + 1, sum);
    sum -= arr[ind];

    // notpick
    solve(arr, N, ans, ind + 1, sum);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ans;
    int sum = 0;
    int ind = 0;

    solve(arr, N, ans, ind, sum);

    return ans;
}