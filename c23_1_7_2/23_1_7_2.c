#include <stdio.h>
int main()
{
	int k = 0;
	int left = 0, right = 0, mid =0;
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("请输入要找的数字\n");
	scanf("%d", &k);
	right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;

		if (k < arr[mid])
			right = mid - 1;
		else if (k > arr[mid])
			left = mid + 1;
		else
		{
			printf("找到了，下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("没找到\n");
	return 0;
}