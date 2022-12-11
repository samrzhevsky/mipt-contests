#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a = 1, b = 1, c = 1, t = 1;

	for (int i = 0; i < n - 2; i++)
	{
		t = a + b + c;
		a = b;
		b = c;
		c = t;
	}

	printf("%d", t);
}