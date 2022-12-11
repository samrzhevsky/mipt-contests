int foo2(int *px, int *py)
{
    int res = (*px) + (*py);
    *px = *px + 1;
    *py = *py - 1;

    printf("foo2 : res=%d x=%d y=%d\n", res, *px, *py);

    return res;
}