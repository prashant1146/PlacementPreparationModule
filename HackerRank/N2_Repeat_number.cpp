#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int lf = 0, rt = 0, flag = 1;
    while (flag == 1)
    {
        while (flag == 1 && rt < N && arr[lf] == arr[rt])
        {
            rt++;
        }
        if (rt - lf > N / 2)
        {
            cout << arr[lf];
            flag = 0;
        }
        else
            lf = rt;
    }
    return 0;
}