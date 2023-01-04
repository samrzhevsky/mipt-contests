#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[110000];
    int j = -1;
    char a[10000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[')
        {
            a[++j] = s[i];
        }
        else if (s[i] == ')')
        {
            if (j < 0 || a[j--] != '(')
            {
                printf("NO");
                return 0;
            }
        }
        else if (s[i] == ']')
        {
            if (j < 0 || a[j--] != '[')
            {
                printf("NO");
                return 0;
            }
        }
        else if (s[i] == '>')
        {
            if (j < 0 || a[j--] != '<')
            {
                printf("NO");
                return 0;
            }
        }
        else if (s[i] == '}')
        {
            if (j < 0 || a[j--] != '{')
            {
                printf("NO");
                return 0;
            }
        }
    }
    if (j > -1)
    {
        printf("NO");
        return 0;
    }
    printf("YES");
    return 0;
}