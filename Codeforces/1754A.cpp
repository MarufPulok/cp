#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n;
        // int n, countQ = 0, countA = 0;
        cin >> n;
        cin >> s;

        int i = 0;
        while (i < n)
        {
            if (s[i] == 'Q')
            {
                bool flag = false;
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j] == 'A')
                    {
                        s[i] = '0', s[j] = '0';
                        flag = true;
                    }
                    if (flag)
                        break;
                }
            }
            i++;
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Q')
            {
                flag = false;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
