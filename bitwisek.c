#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int n, k, j, y = 0;
    scanf("%d %d", &n, &k);
    int x;
    x = k;
    int m[10], o[10], p[10];
    if (k < n)
    {
        for (int i = 0; i = k; i++)
        {
            for (j = y; j < 10; j++)
            {
                m[j] = n & k;
                o[j] = n | k;
                p[j] = n ^ k;
                printf("%d&%d ", n, k);
                k = k - 1;
                if (k == 0)
                {
                    break;
                }
            }
            n = n - 1;
            k = x - 1;
            if (x != 1)
                x = x - 1;
            else
                break;
            y = j + 1;
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", o[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    int f;
    int a = 0, b = 0, c = 0;
    for (f = 0; f < 10; f++)
    {
        if (m[f] < k)
        {
            if (a < m[f])
            {
                a = m[f];
            }
            else
                break;
        }
        if (o[f] < k)
        {
            if (b < o[f])
                b = o[f];
            else
                break;
        }
        if (p[f] < k)
        {
            if (c < p[f])
                c = p[f];
            else
                break;
        }
        printf("\n%d", a);
    }
}