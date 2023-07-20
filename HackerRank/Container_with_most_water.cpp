#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int wind = n - 1, mx = 0, ht, lf;
    while (wind > 0)
    {
        lf = 0;
        while (lf + wind < n)
        {
            ht = min(v[lf], v[lf + wind]);
            mx = max(mx, wind * ht);
            lf++;
        }
        wind--;
    }
    cout << mx;
    return 0;
}