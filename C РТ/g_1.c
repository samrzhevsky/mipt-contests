#include <stdio.h>

struct Line
{
    int start;
    int finish;
};

void readLine(struct Line *pa);
void printLine(struct Line a);
int lengthLine(struct Line a);
void moveLine(struct Line *pa, int dx);

int main()
{
    struct Line a;
    int dx;
    readLine(&a);
    scanf("%d", &dx);

    printf("%d\n", lengthLine(a));
    moveLine(&a, dx);
    printLine(a);

    return 0;
}
void readLine(struct Line *pa)
{
    scanf("%d%d", &(pa->start), &(pa->finish));
    if (pa->start > pa->finish)
    {
        int tmp = pa->start;
        pa->start = pa->finish;
        pa->finish = tmp;
    }
}
void printLine(struct Line a)
{
    printf("%d %d\n", a.start, a.finish);
}
int lengthLine(struct Line a)
{
    return a.finish - a.start;
}
void moveLine(struct Line *pa, int dx)
{
    pa->start = pa->start + dx;
    pa->finish += dx;
}