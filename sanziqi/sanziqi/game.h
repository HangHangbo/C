#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void Dispalyboard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void Computerboard(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);

#endif