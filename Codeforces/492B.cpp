#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, x;
    long l;
    cin >> n >> l;
    long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    long y = max(a[0], l-a[n-1]);
    x = y * 2;

    for (int i = 0; i < n - 1; i++)
    {
        x = max(x, a[i + 1] - a[i]);
    }

    cout.precision(20);
    cout << x / 2.0 << endl;

    return 0;
}
