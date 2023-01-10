#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i = 0;
	for(i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
			break;
	}
	if (i > sqrt(n))
		return 1;
	else
		return 0;
}

int main()
{
	//int a = 0;
	int i = 0;
	//scanf("%d", &a);
	for (i = 2; i <= 100; i++)
	{
		if (is_prime(i) == 1)
			printf("%d	", i);
	}
	return 0;
}