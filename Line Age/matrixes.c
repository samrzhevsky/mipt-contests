#include <stdio.h>
#include <stdlib.h>

int main()
{
        int m1, n1, m2, n2;
        scanf("%d%d%d%d", &m1, &n1, &m2, &n2);
        if (n1 != m2)
        {
                printf("-1\n");
                return 0;
        }

        int **a = (int **)malloc(m1 * sizeof(int *));
        int **b = (int **)malloc(m2 * sizeof(int *));
        int **c = (int **)malloc(m1 * sizeof(int *));
        for (int i = 0; i < m1; i++)
                a[i] = (int *)malloc(n1 * sizeof(int));
        for (int i = 0; i < m2; i++)
                b[i] = (int *)malloc(n2 * sizeof(int));
        for (int i = 0; i < m1; i++)
                c[i] = (int *)malloc(n2 * sizeof(int));

        for (int i = 0; i < m1; i++)
                for (int j = 0; j < n1; j++)
                        scanf("%d", &a[i][j]);
        for (int i = 0; i < m2; i++)
                for (int j = 0; j < n2; j++)
                        scanf("%d", &b[i][j]);

        for (int i = 0; i < m1; i++)
        {
                for (int j = 0; j < n2; j++)
                {
                        c[i][j] = 0;
                        for (int k = 0; k < n1; k++)
                                c[i][j] += a[i][k] * b[k][j];
                }
        }

        for (int i = 0; i < m1; i++)
        {
                for (int j = 0; j < n2; j++)
                        printf("%d ", c[i][j]);
                printf("\n");
        }

        for (int i = 0; i < m1; i++)
                free(a[i]);
        for (int i = 0; i < m2; i++)
                free(b[i]);
        for (int i = 0; i < m1; i++)
                free(c[i]);

        free(a);
        free(b);
        free(c);

        return 0;
}