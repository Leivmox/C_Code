#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	int i = 0, j = 0;
	int arr[4][4] =
	{
		{1,2,4,5}, {6,7,8,9}, {10,11,12,13}, {14,15,16,17}
	};
	printf("矩阵:\n");
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			printf("%2d ", arr[i][j]);
			if (i == 0 || i == 3 || j == 0 && i != 0 || j == 3 && i != 3)
				a += arr[i][j];
			if (i == j)
				b += arr[i][j];
			if (i + j == 3)
				c += arr[i][j];
		}
		printf("\n");
	}
	printf("\n外围元素之和为:%d\n", a);
	printf("主对角线元素之和为:%d\n", b);
	printf("副对角线元素之和为:%d\n", c);

	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		arr[i][j] = a;
	//		a++;
	//	}
	//}
	//printf("%d", arr[3][1]);


	return 0;
}