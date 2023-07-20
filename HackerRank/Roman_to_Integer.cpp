#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    string inp;
    cin >> inp;
    int ans = mp[inp[0]], n = inp.length();
    for (int i = 1; i < n; i++)
    {
        ans += mp[inp[i]];
        if (mp[inp[i]] > mp[inp[i - 1]])
            ans -= (2 * mp[inp[i - 1]]);
    }
    cout << ans;
    return 0;
}