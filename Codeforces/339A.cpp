#include <bits/stdc++.h>
int main ()
{
    char string[1000];
    int i, j = 0, k, l, ln, array[1000], m, n, temp;
    scanf("%s", string);
    ln = strlen(string);
    for(i = 0; i < ln; i++)
    {
        if((i % 2) == 0)
        {
            array[j] = (int) string[i];
            j++;
        }
    }
    for(m = 1; m < j; m++)
    {
        for(n = 0; n < (j - m); n++)
        {
            if(array[n] > array[n + 1])
            {
                temp = array[n];
                array[n] = array[n + 1];
                array[n + 1] = temp;
            }
        }
    }
    for(k = 0; k < j; k++)
    {
        if(k == (j - 1))
        {
            printf("%c", (char) array[k]);
        }
        else
        {
            printf("%c%c", (char) array[k], '+');
        }
    }
    printf("\n");

    return 0;
}
