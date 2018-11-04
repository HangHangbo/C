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
		printf("���Ӯ\n");
	else if (ret == '0')
		printf("����Ӯ\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
					printf("�˳���Ϸ\n");
				break;
		default:
			printf("ѡ�����������ѡ��\n");
			     break;

		
		}
	} while (input);
	system("pause");
	return 0;
}