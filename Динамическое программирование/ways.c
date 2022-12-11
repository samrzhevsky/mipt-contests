#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    unsigned long int a[21][21];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i][j - 1];
        }

    printf("%ld", a[n][m]);

    return 0;
}