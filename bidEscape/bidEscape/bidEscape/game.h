#define _CRT_SECURE_NO_WARNINGS
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _GAME_H
#define _GAME_H

typedef struct _BidPos {
	int x;
	int y;
}BidPos;

int moveBid(int N, int M, char** board);

int moveToUp(int* count, char** board, BidPos* red, BidPos* blue);
int moveToDown(int* count, char** board, BidPos* red, BidPos* blue);
int moveToLeft(int* count, char** board, BidPos* red, BidPos* blue);
int moveToRight(int* count, char** board, BidPos* red, BidPos* blue);

#endif