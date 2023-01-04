#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int **a = calloc(2, sizeof(int *));
    a[0] = calloc(n + 1, sizeof(int));
    a[1] = calloc(n + 1, sizeof(int));

    a[0][1] = 1;
    a[1][1] = 1;

    for (int i = 2; i < n + 1; i++)
    {
        a[0][i] = a[0][i - 1] + a[1][i - 1];
        a[1][i] = a[0][i - 1];
    }

    printf("%d\n", a[0][n] + a[1][n]);

    free(a[0]);
    free(a[1]);
    free(a);

    return 0;
}