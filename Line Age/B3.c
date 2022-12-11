#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2)
{
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
        long long x1, x2, x0, y1, y2, y0;
        double a, b, c, t;
        scanf("%lld%lld%lld%lld%lld%lld", &x0, &y0, &x1, &y1, &x2, &y2);

        double r1 = dist(x0, y0, x1, y1);
        double r2 = dist(x0, y0, x2, y2);
        double r12 = dist(x1, y1, x2, y2);

        if (r1 >= dist(r2, r12, 0, 0))
        {
                printf("%lg\n", r2);
        }
        else if (r2 >= dist(r1, r12, 0, 0))
        {
                printf("%lg\n", r1);
        }
        else
        {
                a = y2 - y1;
                b = x1 - x2;
                c = -x1 * (y2 - y1) + y1 * (x2 - x1);
                t = dist(a, b, 0, 0);
                if (c > 0)
                {
                        a = -a;
                        b = -b;
                        c = -c;
                }
                printf("%lg\n", fabs((a * x0 + b * y0 + c) / t));
        }

        return 0;
}