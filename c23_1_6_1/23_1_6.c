#include<stdio.h>
int main()
{
	int num = 0, i = 0;
	for (i = 0; i < 100; i++)
	{
		if (i % 2 != 0)
			printf("%d\n", i);
	}

	return 0;
}