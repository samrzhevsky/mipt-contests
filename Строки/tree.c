#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[220000];
    int j = 0;
    int crn = 0;
    double x = 0;
    double cr = 0;
    int cnt = 0;
    int nm = 0;
    int mn = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (!isdigit(s[i]))
        {
            if (nm != 0)
            {
                cr = crn;
                for (int k = 0; k < j; ++k)
                    cr /= 2;
                if (mn == 0)
                {
                    x += cr;
                }
                else
                {
                    x -= cr;
                }
                cnt += 1;
            }
            crn = 0;
            cr = 0;
            nm = 0;
            if (s[i] == '(')
                j++;
            if (s[i] == ')')
                j--;
            if (s[i] == '-')
            {
                nm = 1;
                mn = 1;
            }
        }
        else
        {
            if (nm == 0)
                mn = 0;
            nm = 1;
            crn *= 10;
            crn += (s[i] - '0');
        }
    }
    if (nm != 0)
    {
        cr = crn;
        for (int k = 0; k < j; ++k)
            cr /= 2;
        x += cr;
        crn = 0;
        cr = 0;
        cnt += 1;
    }
    printf("%.02f", x);
    return 0;
}