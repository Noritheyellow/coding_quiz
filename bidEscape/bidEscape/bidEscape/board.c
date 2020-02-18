#include "board.h"
#include "game.h"

char** init(int N, int M) {
	
	char** board = malloc(sizeof(char*) * (N + 1));

	if (board) {
		for (int i = 0; i < N; i++) {
			board[i] = malloc(sizeof(char) * (M + 1));
		}

		for (int i = 0; i < N; i++) {
			if (board[i]) {
				scanf("%s", board[i]);
			}
			else {
				printf("failed\n");
			}
		}
	}
	else {
		printf("failed\n");
	}

	return board;
}

int start(int N, int M, char** board) {
	int count = 0;
	
	// moveBid() will keep moving the bid and
	// will returns the count of movement.
	// if the count exceed 10 times, returns 0
	if (count = moveBid(N, M, board)) {
		return count;
	}
	else {
		return -1;
	}
}