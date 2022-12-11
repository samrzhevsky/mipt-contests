#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n, s;
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &s);

    long *b = malloc((s + 1) * sizeof(long));
    b[0] = 0;

    for (long i = 1; i <= s; i++)
    {
        b[i] = INT_MAX;

        for (int j = 0; j < n; j++)
            if (i >= a[j] && (b[i - a[j]] + 1) < b[i])
                b[i] = b[i - a[j]] + 1;
    }

    if (b[s] == INT_MAX)
    {
        printf("-1\n");
    }
    else
    {
        printf("%ld\n", b[s]);
        while (s > 0)
            for (int i = 0; i < n; i++)
                if ((s - a[i]) >= 0 && b[s - a[i]] == b[s] - 1)
                {
                    printf("%d ", a[i]);
                    s -= a[i];
                    break;
                }
        printf("\n");
    }

    free(a);
    free(b);

    return 0;
}