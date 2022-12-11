#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *good;
	char *bad;
	int len;
	int retg, retb;

	do
	{
		retg = scanf("%m[a-z]%n", &good, &len);
		if ((1 == retg) && (0 == strncmp(good, "bomb", len)))
		{
			printf("YES");
			free(good);
			return 0;
		}
		free(good);

		retb = scanf("%m[^a-z]%n", &bad, &len);
		free(bad);
	} while ((1 == retg) || (1 == retb));

	printf("NO");

	return 0;
}