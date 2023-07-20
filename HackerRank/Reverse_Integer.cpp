#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int mn = -2147483648, mx = 2147483647, rev = 0, rem, num;
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        if ((rev > mx / 10) || (rev == mx / 10 && rem > 7))
        {
            cout << 0;
            return 0;
        }
        if ((rev < mn / 10) || (rev == mn / 10 && rem < -8))
        {
            cout << 0;
            return 0;
        }
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << rev;
    return 0;
}