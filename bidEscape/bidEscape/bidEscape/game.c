#include "game.h"

int moveBid(int N, int M, char** board) {
	int count = 0;
	int flag = 0;
	BidPos red, blue;
	memset(&red, 0, sizeof(BidPos));
	memset(&blue, 0, sizeof(BidPos));
	
	// findIndex
	printf("%d\n", _msize(board));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (board[i][j] == 'R') {
				printf("red : %d, %d\n", i, j);
				red.x = i;
				red.y = j;
			}
			else if (board[i][j] == 'B') {
				printf("blue : %d, %d\n", i, j);
				blue.x = i;
				blue.y = j;
			}
		}
	}

	// check around
	for (;;) {
		// check 'O' first
	// up
		if (board[red.x - 1][red.y] == 'O') {
			flag = moveToUp(&count, board, &red, &blue);
		}
		// down
		else if (board[red.x + 1][red.y] == 'O') {
			flag = moveToDown(&count, board, &red, &blue);
		}
		// left
		else if (board[red.x][red.y - 1] == 'O') {
			flag = moveToLeft(&count, board, &red, &blue);
		}
		// right
		else if (board[red.x][red.y + 1] == 'O') {
			flag = moveToRight(&count, board, &red, &blue);
		}

		//check '.' second
		// up
		if (board[red.x - 1][red.y] == '.') {
			flag = moveToUp(&count, board, &red, &blue);
		}
		// down
		else if (board[red.x + 1][red.y] == '.') {
			flag = moveToDown(&count, board, &red, &blue);
		}
		// left
		else if (board[red.x][red.y - 1] == '.') {
			flag = moveToLeft(&count, board, &red, &blue);
		}
		// right
		else if (board[red.x][red.y + 1] == '.') {
			flag = moveToRight(&count, board, &red, &blue);
		}

		if (flag == 0) {
			count = -1;
			break;
		}
	}

	return count;
}

int moveToUp(int* count, char** board, BidPos* red, BidPos* blue){
	int temp;
	int flag = 1;
	// move Red
	for (;;) {
		if (board[(red->x) - 1][red->y] == '.') {
			SWAP(board[red->x][red->y], board[(red->x) - 1][red->y], temp);
			red->x = red->x - 1;
		}
		else if (board[(red->x) - 1][red->y] == 'O') {
			flag = 1;
			break;
		}
	}
	
	// move Blue
	for (;;) {
		if (board[(blue->x) - 1][blue->y] == '.') {
			SWAP(board[blue->x][blue->y], board[(blue->x) - 1][blue->y], temp);
			blue->x = blue->x - 1;
		}
		else if (board[(blue->x) - 1][blue->y] == 'O') {
			flag = 0;
			break;
		}
	}
	*count = *count + 1;

	return flag;
}

int moveToDown(int* count, char** board, BidPos* red, BidPos* blue){
	int temp;
	int flag = 1;
	// move Red
	for (;;) {
		if (board[(red->x) + 1][red->y] == '.') {
			SWAP(board[red->x][red->y], board[(red->x) + 1][red->y], temp);
			red->x = red->x - 1;
		}
		else if (board[(red->x) - 1][red->y] == 'O') {
			flag = 1;
			break;
		}
	}

	// move Blue
	for (;;) {
		if (board[(blue->x) + 1][blue->y] == '.') {
			SWAP(board[blue->x][blue->y], board[(blue->x) + 1][blue->y], temp);
			blue->x = blue->x + 1;
		}
		else if (board[(blue->x) + 1][blue->y] == 'O') {
			flag = 0;
			break;
		}
	}
	*count = *count + 1;

	return flag;
}

int moveToLeft(int* count, char** board, BidPos* red, BidPos* blue){
	int temp;
	int flag = 1;
	// move Red
	for (;;) {
		if (board[(red->x) - 1][red->y] == '.') {
			SWAP(board[red->x][red->y], board[(red->x) - 1][red->y], temp);
			red->x = red->x - 1;
		}
		else if (board[(red->x) - 1][red->y] == 'O') {
			flag = 1;
			break;
		}
	}

	// move Blue
	for (;;) {
		if (board[(blue->x) - 1][blue->y] == '.') {
			SWAP(board[blue->x][blue->y], board[(blue->x) - 1][blue->y], temp);
			blue->x = blue->x - 1;
		}
		else if (board[(blue->x) - 1][blue->y] == 'O') {
			flag = 0;
			break;
		}
	}
	*count = *count + 1;

	return flag;
}

int moveToRight(int* count, char** board, BidPos* red, BidPos* blue){
	int temp;
	int flag = 1;
	// move Red
	for (;;) {
		if (board[(red->x) - 1][red->y] == '.') {
			SWAP(board[red->x][red->y], board[(red->x) - 1][red->y], temp);
			red->x = red->x - 1;
		}
		else if (board[(red->x) - 1][red->y] == 'O') {
			flag = 1;
			break;
		}
	}

	// move Blue
	for (;;) {
		if (board[(blue->x) - 1][blue->y] == '.') {
			SWAP(board[blue->x][blue->y], board[(blue->x) - 1][blue->y], temp);
			blue->x = blue->x - 1;
		}
		else if (board[(blue->x) - 1][blue->y] == 'O') {
			flag = 0;
			break;
		}
	}
	*count = *count + 1;

	return flag;
}
