#include <stdio.h>

int main()
{
	int n, nRev = 0;
	scanf("%d", &n);

	while (n > 0)
	{
		nRev = (nRev * 10) + (n % 10);
		n /= 10;
	}

	printf("%d", nRev);

	return 0;
}