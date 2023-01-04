#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    double x, y;
} point;

double sqr(double x)
{
    return x * x;
}

double Length(const point a, const point b)
{
    return sqrt(sqr(b.x - a.x) + sqr(b.y - a.y));
}

point BisectorPoint(const point a, const point b, const point c)
{
    double cc = Length(b, c) / Length(b, a);
    point a1 = {b.x + (a.x - b.x) * cc, b.y + (a.y - b.y) * cc};
    point result = {(a1.x + c.x) / 2, (a1.y + c.y) / 2};
    return result;
}

point Intersection(const point a1, const point a2,
                   const point b1, const point b2)
{
    double a, b, c, d, e, f, dd, d1, d2, t;
    a = a2.x - a1.x;
    b = b2.x - b1.x;
    c = b1.x - a1.x;
    d = a2.y - a1.y;
    e = b2.y - b1.y;
    f = b1.y - a1.y;
    dd = a * e - b * d;
    d1 = c * e - b * f;
    d2 = a * f - c * d;
    t = d1 / dd;
    point result = {a1.x + t * a, a1.y + t * d};
    return result;
}

int main()
{
    point a, b, c;
    scanf("%lf %lf %lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
    point q = Intersection(b, BisectorPoint(a, b, c), c, BisectorPoint(b, c, a));
    printf("%lf %lf", q.x, q.y);

    return 0;
}