#include <stdio.h>

int main()
{
	float x, y;
	scanf("%f%f", &x, &y);

	float f = -3 + (x * x);
	if ((y > 2 && y > f) || (y < 2 && y < f))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}