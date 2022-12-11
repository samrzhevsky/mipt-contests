#include <stdio.h>
#include <math.h>

int main()
{
        int x1, y1, x2, y2;
        double t;

        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        t = (x1 * x2 + y1 * y2) / (sqrt((double)(x1 * x1 + y1 * y1)) * sqrt((double)(x2 * x2 + y2 * y2)));
        printf("%.20lg\n", acos(t));

        return 0;
}