#include <stdio.h>
int main()
{
    int a[3][3];

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            scanf("%d", &a[y][x]);
        }
    }

    printf("%d", a[0][0] + a[1][1] + a[2][2]);

    return 0;
}