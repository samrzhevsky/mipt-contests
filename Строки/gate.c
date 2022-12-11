#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
        char *str;
        char *bad;
        int x = 0, y = 0;
        int retg, retb;
        int step;

        do
        {
                retg = scanf("%m[A-Za-z] %d", &str, &step);
                if (0 != retg)
                {
                        if (0 == strcmp(str, "North"))
                        {
                                y += step;
                        }
                        else if (0 == strcmp(str, "South"))
                        {
                                y -= step;
                        }
                        else if (0 == strcmp(str, "East"))
                        {
                                x += step;
                        }
                        else if (0 == strcmp(str, "West"))
                        {
                                x -= step;
                        }
                        else if (0 == strcmp(str, "Treasure"))
                        {
                                printf("%d %d", x, y);
                                free(str);
                                return 0;
                        }
                }

                free(str);

                retb = scanf("%m[^A-Za-z]", &bad);
                free(bad);
        } while ((1 == retg) || (1 == retb));

        return 0;
}