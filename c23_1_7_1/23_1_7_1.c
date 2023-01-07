#include<stdio.h>
int main()
{
	int i = 0, a = 1, b = 0, j = 0, c = 0;
	scanf("%d", &b);
	for (j = 1; j <= b; j++)
	{
		a = 1;
		for (i = 1; i <= j; i++)
		{
			a *= i;
		}
		c += a;
	}
	printf("%d", c);
	return 0;
}