#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void game()
{

	{
		int ret = 0;
		int guess = 0;
		ret = rand() % 100 + 1;
		while (1)
		{
			printf("请猜数字:>");
			scanf("%d", &guess);
			if (guess > ret)
				printf("猜大了\n");
			else if (guess < ret)
				printf("猜小了\n");
			else
			{
				printf("						恭喜你，猜对了！！！");
				Sleep(2000);
				break;
			}
		}

	}
}

void menu()
{
	printf("#######################################\n");
	printf("##         猜数字游戏(1-100)         ##\n");
	printf("##      1.play           0.exit      ##\n");
	printf("#######################################\n");
	printf("请选择:>");
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		Sleep(2000);
		system("cls");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}
	} while (input);

	return 0;
}