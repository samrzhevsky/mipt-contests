#include <stdio.h>

int main()
{
	int n, t = 0, sumEven = 0, sumOdd = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);

		if (i % 2 == 0)
		{
			sumEven += t;
		}
		else
		{
			sumOdd += t;
		}
	}

	printf("%d", sumEven - sumOdd);

	return 0;
}