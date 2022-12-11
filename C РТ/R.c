#include <stdio.h>
#include <malloc.h>

int main()
{
	int n;
	int *a;
	scanf("%d", &n);

	a = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
	}

	free(a);

	return 0;
}