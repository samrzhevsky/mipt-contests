#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int **a = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        a[i] = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = 0; j < n; j++)
            if (i != j)
                s += a[i][j];

        if (s % 2 != 0)
        {
            printf("NO\n");

            for (int i = 0; i < n; i++)
                free(a[i]);
            free(a);

            return 0;
        }
    }

    printf("YES\n");

    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return 0;
}