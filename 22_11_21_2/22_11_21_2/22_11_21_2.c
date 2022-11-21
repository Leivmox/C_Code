#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	unsigned int n = 0;
	int i = 0, a = 0, min = 1000;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < min)
			min = a;
	}
		printf("%d", min);

	return 0;
}