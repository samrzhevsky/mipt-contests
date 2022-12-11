#include <stdio.h>
#include <stdlib.h>

int a[128][128];

int main()
{
    int n, m, k, t;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &k, &t);
        a[k][t] = 1;
        a[t][k] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}