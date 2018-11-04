#define  _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("****    1.play   ****\n");
	printf("****    0.exit   ****\n");
	printf("*********************\n");
}
void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	InitBoard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayMove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
			break;
		Displayboard(board, ROW, COL);
		Computerboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != ' ')
			break;
		Displayboard(board, ROW, COL);
	}
	if (ret == 'X')
		printf("玩家赢\n");
	else if (ret == '0')
		printf("电脑赢\n");
	else if (ret == 'Q')
		printf("平局\n");
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入：");
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
			printf("选择错误请重新选择\n");
			     break;

		
		}
	} while (input);
	system("pause");
	return 0;
}