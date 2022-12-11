#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
    if (NULL == argv[1])
        return 0;

    int n = atoi(argv[1]);
    for (int i = 0; i < n && envp[i]; i++)
        printf("%s\n", envp[i]);

    return 0;
}