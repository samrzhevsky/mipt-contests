#include <stdio.h>

int main()
{
        int x1, x2, x3, y1, y2, y3;

        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

        double a1 = x3 - x2;
        double b1 = y3 - y2;
        double c1 = x1 * (x3 - x2) + y1 * (y3 - y2);

        double a2 = x3 - x1;
        double b2 = y3 - y1;
        double c2 = x2 * (x3 - x1) + y2 * (y3 - y1);

        double d = a1 * b2 - a2 * b1;
        double dx = (c1 * b2) - c2 * b1;
        double dy = a1 * c2 - a2 * c1;

        printf("%lf %lf\n", dx / d, dy / d);

        return 0;
}