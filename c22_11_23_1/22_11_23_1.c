#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubbleSort(int arr[]);
void printArray(int arr[]);

int main()
{
	int i = 0, j = 0, t = 0, n = 0;
	int arr[] = { 4,2,3,1 };
	bubbleSort(arr);
	printArray(arr);

	return 0;
}

void bubbleSort(int arr[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
 }

void printArray(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d\t", arr[i]);
	}
}