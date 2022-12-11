#include <stdio.h>
#include <limits.h>

int a[128][128];
int b[128][128];

int main()
{
    int n, mx = INT_MIN;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
        }

    b[0][0] = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sumLeft = b[i][j] + a[i + 1][j];
            int sumRight = b[i][j] + a[i + 1][j + 1];

            if (b[i + 1][j] < sumLeft)
                b[i + 1][j] = sumLeft;
            b[i + 1][j + 1] = sumRight;
        }
    }

    for (int j = 0; j < n; j++)
        if (b[n - 1][j] > mx)
            mx = b[n - 1][j];

    printf("%d\n", mx);
}