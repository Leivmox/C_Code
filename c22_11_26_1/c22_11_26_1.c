#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sequentialSearch(int n, int arr[], int k);
int main()
{
	int nums[10] = { 4,57,68,12,47,78,64,87,56,72 };
	int key = 68;
	int result = sequentialSearch(10, nums, key);
	printf("%d", result);
	return 0;
}
int sequentialSearch(int n, int arr[], int k)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == k)
			return i;
	return -1;
}