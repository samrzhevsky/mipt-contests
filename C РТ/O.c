#include <stdio.h>

int main()
{
	int c, k = 0;

	c = getchar();
	while (c == '(' || c == ')')
	{
		if (c == '(')
		{
			k++;
		}

		if (c == ')')
		{
			k--;

			if (k < 0)
			{
				break;
			}
		}

		c = getchar();
	}

	if (k == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}