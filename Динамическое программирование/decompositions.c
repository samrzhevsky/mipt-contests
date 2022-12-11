#include <stdio.h>

int dp[128][128];

int main()
{
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        dp[i][i] = 1;

    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            for (int k = j; k <= n; k++)
                if ((i + k) <= n)
                    dp[i + k][k] += dp[i][j];

    for (int i = 0; i <= n; i++)
        res += dp[n][i];

    printf("%d\n", res);

    return 0;
}