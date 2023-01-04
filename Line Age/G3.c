#include <stdio.h>
#include <math.h>
#define ll long long int

typedef struct Point
{
    ll x;
    ll y;
} Point;

typedef struct Vector
{
    ll x;
    ll y;
} Vector;

Point point(ll x, ll y);

Vector vector(Point a, Point b);

int dot(Vector a, Vector b);

int cross(Vector a, Vector b);

Vector ptv(Point a);

Vector minus(Vector a);

Vector sum(Vector a, Vector b);

long double dist(Point a, Point b);

long double len(Vector a);

int main()
{
    Point A, B, C, D;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y, &D.x, &D.y);

    Vector AB = vector(A, B);
    Vector BC = vector(B, C);
    Vector CA = vector(C, A);

    Vector AD = vector(A, D);
    Vector BD = vector(B, D);
    Vector CD = vector(C, D);

    if (cross(AD, BD) == 0 && len(AD) <= len(AB) && len(BD) <= len(AB))
    {
        printf("In");
        return 0;
    }

    if (cross(AD, CD) == 0 && len(AD) <= len(CA) && len(CD) <= len(CA))
    {
        printf("In");
        return 0;
    }

    if (cross(CD, BD) == 0 && len(CD) <= len(BC) && len(BD) <= len(BC))
    {
        printf("In");
        return 0;
    }

    ll A1 = cross(AB, AD);
    ll B1 = cross(BC, BD);
    ll C1 = cross(CA, CD);

    if (A1 < 0 && B1 < 0 && C1 < 0)
    {
        printf("In");
        return 0;
    }

    if (A1 > 0 && B1 > 0 && C1 > 0)
    {
        printf("In");
        return 0;
    }

    printf("Out");

    return 0;
}

Point point(ll x, ll y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

Vector vector(Point a, Point b)
{
    Vector v;
    v.x = b.x - a.x;
    v.y = b.y - a.y;
    return v;
}

int dot(Vector a, Vector b)
{
    return a.x * b.x + a.y * b.y;
}

int cross(Vector a, Vector b)
{
    return (a.x * b.y) - (a.y * b.x);
}

Vector ptv(Point a)
{
    return vector(a, point(0, 0));
}

Vector minus(Vector a)
{
    a.x = -a.x;
    a.y = -a.y;
    return a;
}

Vector plus(Vector a, Vector b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

long double dist(Point a, Point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

long double len(Vector a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}