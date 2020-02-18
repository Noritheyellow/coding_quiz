/*
	Header Line
*/
#include "board.h"

int main() {

	char** board;
	int N, M;

	scanf("%d %d", &N, &M);

	// make game board
	board = init(N, M);

	// check
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}*/

	// start the game
	start(N, M, board);

	return 0;
}