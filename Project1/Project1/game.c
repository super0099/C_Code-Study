#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
		{
			board[ROW][COL] = ' ';
		}
	}
}
//�������
//1.���ӭ = "*"
//2.����Ӯ = "#"
//3.ƽ�� = "Q"
//4.���� = "C"
int isFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == 0) {
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col) {
	//������
	for (int i = 0; i < row; i++)
	{
		if (board[i][0]== board[i][1]&& board[i][1]== board[i][2]&& board[i][0]!=0) {
			return board[i][0];
		}
	}
	//������
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0) {
			return board[0][i];
		}
	}
	//��б����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) {
		return board[0][0];
	}
	//��б����
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0) {
		return board[0][2];
	}
	//�ж�ƽ��
	if (1 == isFull(board, row, col)) {
		return 'Q';
	}
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = rand()%row;
	int y = rand() % col;
	char tes = 0;
	if (board[x - 1][y - 1] == 0) {
		printf("������>x = %d,y = %d\n",x,y);
		board[x-1][y-1] = "#";
	}
	else
	{
		ComputerMove(board, row, col);
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//����
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	//��Ҳ���
	printf("�������>\n");
	printf("��������Ҫ�µ�����");
	scanf("%d%d", &x, &y);
	if (x>=1&&x<=row&&y>=1&&y<=col)
	{
		char ar = board[x - 1][y - 1];
		if (ar == 0) {
			board[x - 1][y - 1] = '*';			
		}
		else
		{
			printf("����λ���ѱ�ռ��");
		}		
	}
	else
	{
		printf("����λ�ò���ȷ\n");
	}
}