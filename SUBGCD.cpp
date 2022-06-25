#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    return __gcd(a, b);
}
int main()
{
    int t, i, res, num;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        res = 0;
        for (i = 0; i < n; i++)
        {
            cin >> num;
            res = GCD(res, num);
        }

        if (res == 1)
            cout << n << endl;
        else
            cout << -1 << endl;
    }
}