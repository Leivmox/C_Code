#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, j = 0;
	int arr[100];
	scanf("%d", &a);
	while (a)
	{
		arr[i] = a % 2;
		++i;
		a /= 2;
		/*if (a = 0)
			break;*/
	}
	//printf("%d", arr[3]);
	//for (i; i >= 0; i--)
	//	printf("%d", arr[i]);
	    for (j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
	printf("\n");

	return 0;
}

