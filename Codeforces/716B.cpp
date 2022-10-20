#include <bits/stdc++.h>
using namespace std;

char a[50010];
int b[30];
int main()
{
    
    scanf("%s",a);
    int n=strlen(a),flag1,flag2=0;
    if (n < 26)
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n - 25; i++)
    {
        flag1 = 1;
        memset(b, 0, sizeof(b));
        for (int j = i; j < i + 26; j++)
        {
            if (a[j] >= 'A' && a[j] <= 'Z')
            {
                b[a[j] - 'A']++;
            }
            if (b[a[j] - 'A'] >= 2)
            {
                flag1 = 0;
                break;
            }
        }
        if (!flag1)
            continue;
        flag2 = 1;
        for (int j = i; j < i + 26; j++)
        {
            if (a[j] == '?')
            {
                for (int k = 0; k < 26; k++)
                {
                    if (b[k] == 0)
                    {
                        a[j] = k + 'A';
                        b[k] = 1;
                        break;
                    }
                }
            }
        }
        if (flag2)
            break;
    }
    if (flag2)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '?')
                printf("A");
            else
                printf("%c", a[i]);
        }
        printf("\n");
    }
    else
        printf("-1\n");
}
