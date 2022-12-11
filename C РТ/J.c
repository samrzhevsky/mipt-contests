#include <stdio.h>

int main()
{
	int n, k, t = 0, count = 0;
	scanf("%d%d", &k, &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &t);

		if (t == k)
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}