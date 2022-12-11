#include <stdio.h>
#include <stdlib.h>

int main()
{
        char *strTmp;
        char *strTmp1;
        int retg, retb, len;

        do
        {
                retg = scanf("%m[A-Za-z]%n", &strTmp, &len);
                if (1 == retg)
                {
                        for (int i = len - 1; i >= 0; i--)
                        {
                                printf("%c", strTmp[i]);
                        }
                        free(strTmp);
                }

                retb = scanf("%m[^A-Za-z]", &strTmp1);
                if (1 == retb)
                {
                        printf("%s", strTmp1);
                        free(strTmp1);
                }
        } while ((1 == retg) || (1 == retb));

        return 0;
}