#include <stdio.h>

int main()
{
    int arr[65536] = {0};
    int n, a, b, c;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (arr[i] == 0 || arr[i] > a + arr[i - 1])
            arr[i] = a + arr[i - 1];
        if (arr[i + 1] == 0 || arr[i + 1] > b + arr[i - 1])
            arr[i + 1] = b + arr[i - 1];
        if (arr[i + 2] == 0 || arr[i + 2] > c + arr[i - 1])
            arr[i + 2] = c + arr[i - 1];
    }

    printf("%d", arr[n]);

    return 0;
}