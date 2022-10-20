#include <bits/stdc++.h>
using namespace std;

int switchLight(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int first[3][3], second[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> first[i][j];
            if (first[i][j] % 2 == 0)
            {
                first[i][j] = 0;
            }
            else
            {
                first[i][j] = 1;
            }
            second[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (first[i][j] == 1)
            {
                second[i][j] = switchLight(second[i][j]);
            }
            if (i > 0)
                second[i - 1][j] = switchLight(second[i - 1][j]);
            if (j > 0)
                second[i][j - 1] = switchLight(second[i][j - 1]);
            if (i < 2)
                second[i + 1][j] = switchLight(second[i + 1][j]);
            if (j < 2)
                second[i][j + 1] = switchLight(second[i][j + 1]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << second[i][j];
        cout << endl;
    }
}