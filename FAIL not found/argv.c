#include <stdlib.h>

int main(int argc, char **argv)
{
    int s = 0;
    for (int i = 1; argv[i]; i++)
        s += atoi(argv[i]);

    return s;
}