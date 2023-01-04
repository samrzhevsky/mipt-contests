#include <stdio.h>

int det(int i1, int i2, int i3, int j1, int j2, int j3, int k1, int k2, int k3)
{
    return i1 * j2 * k3 - i1 * k2 * j3 - i2 * j1 * k3 + i2 * j3 * k1 + i3 * j1 * k2 - i3 * j2 * k1;
}

int main()
{
    int d[12];
    for (int i = 0; i < 12; ++i)
        scanf("%d", &d[i]);
    int d0 = det(d[0], d[1], d[2], d[4], d[5], d[6], d[8], d[9], d[10]);
    if (d0 == 0)
    {
        printf("NO");
        return 0;
    }
    int d1 = det(d[3], d[1], d[2], d[7], d[5], d[6], d[11], d[9], d[10]);
    int d2 = det(d[0], d[3], d[2], d[4], d[7], d[6], d[8], d[11], d[10]);
    int d3 = det(d[0], d[1], d[3], d[4], d[5], d[7], d[8], d[9], d[11]);
    printf("%lg\n%lg\n%lg", (double)d1 / d0, (double)d2 / d0, (double)d3 / d0);
    return 0;
}