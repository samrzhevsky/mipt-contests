#include <stdio.h>
#include <math.h>

struct Direction
{
    int x;
    int y;
};
struct Point
{
    int x;
    int y;
};
struct Line
{
    struct Point start;
    struct Point finish;
};

void readLine(struct Line *pa);
void printLine(struct Line a);
float lengthLine(struct Line a);
void moveLineX(struct Line *pa, int dx);
void moveLine(struct Line *pa, struct Direction d);

int main()
{
    struct Line a;
    struct Direction d;

    readLine(&a);
    scanf("%d", &(d.x));
    scanf("%d", &(d.y));

    printf("%f\n", lengthLine(a));

    moveLine(&a, d);
    printLine(a);

    return 0;
}
void readPoint(struct Point *p)
{
    scanf("%d%d", &(p->x), &(p->y));
}
void printPoint(struct Point p)
{
    printf("%d %d", p.x, p.y);
}

void readLine(struct Line *pa)
{
    readPoint(&(pa->start));
    readPoint(&(pa->finish));
}
void printLine(struct Line a)
{
    printPoint(a.start);
    printf(" ");
    printPoint(a.finish);
    printf("\n");
}
float lengthLine(struct Line a)
{
    int dx = a.finish.x - a.start.x;
    int dy = a.finish.y - a.start.y;
    return sqrt(dx * dx + dy * dy);
}
void moveLineX(struct Line *pa, int dx)
{
    pa->start.x = pa->start.x + dx;
    pa->finish.x += dx;
}
void moveLine(struct Line *pa, struct Direction d)
{
    pa->start.x += d.x;
    pa->finish.x += d.x;

    pa->start.y += d.y;
    pa->finish.y += d.y;
}