#include <iostream>
using namespace std;
int toggle(int n)
{ 
    if (n == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int grid[3][3];
    int res[3][3];

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] % 2 == 0)
            {
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = 1;
            }
            res[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 1)
            {                                                 
                res[i][j] = toggle(res[i][j]); 
                if (i > 0)
                {
                    res[i - 1][j] = toggle(res[i - 1][j]); 
                }
                if (j > 0)
                {
                    res[i][j - 1] = toggle(res[i][j - 1]); 
                }
                if (i < 2)
                {
                    res[i + 1][j] = toggle(res[i + 1][j]); 
                }
                if (j < 2)
                {
                    res[i][j + 1] = toggle(res[i][j + 1]); 
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << res[i][j]; 
        }
        cout << endl;
    }
}