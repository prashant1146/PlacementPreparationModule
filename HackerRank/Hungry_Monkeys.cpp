#include <bits/stdc++.h>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, b, p, i, j, ans = 0;
    cin >> N >> b >> p >> i >> j;
    if (N <= 0 || b <= 0 || p <= 0 || i <= 0 || j <= 0)
    {
        cout << "INVALID INPUT";
        return 0;
    }
    ans = i / b;
    ans += j / p;
    if ((i % b > 0) || (j % p > 0))
        ans++;
    if (N >= ans)
        cout << N - ans;
    else
        cout << 0;
    return 0;
}