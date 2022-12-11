#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str;
	unsigned len;
	register unsigned res = 0;

	scanf("%m[0-9]%n", &str, &len);

	for (register unsigned i = 0; i < len; i++)
		res += str[i];

	printf(res % 3 ? "NO" : "YES");
	free(str);

	return 0;
}