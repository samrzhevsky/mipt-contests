#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *fout = fopen("output.txt", "wt");

    if (argc < 2)
    {
        fprintf(fout, "Usage: stat filename\n");
        fclose(fout);
        return 1;
    }

    FILE *f = fopen(argv[1], "rt");
    if (!f)
    {
        fprintf(fout, "Can't open file %s\n", argv[1]);
        fclose(fout);
        return 2;
    }

    fseek(f, 0, SEEK_END);
    fprintf(fout, "%ld", ftell(f));

    fclose(fout);
    fclose(f);
    return 0;
}