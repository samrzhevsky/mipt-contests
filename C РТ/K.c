#include <stdio.h>

int main()
{
	int k, count = 0;
	scanf("%d", &k);

	while (k > 0)
	{
		if ((k % 2) == 1)
		{
			count++;
		}
		k /= 2;
	}
	printf("%d", count);

	return 0;
}