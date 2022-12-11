#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);

    int **a = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        a[i] = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1)
                c++;

    printf("%d\n", c / 2);

    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);

    return 0;
}