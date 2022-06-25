#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x;
    cin >> x;
    int array[] = {1, 5, 10, 20, 100};
    int index = 4, ans = 0;
    if (x % 100 == 0)
    {
        cout << x / 100 << endl;
    }

    else
    {
        while (x > 0)
        {
            if (x >= array[index])
            {
                x -= array[index];
                ans++;
            }
            else
            {
                index--;
            }
        }

        cout << ans << endl;
    }
}
