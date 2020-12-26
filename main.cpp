
// CONNECT FOUR

#include <iostream>
using namespace std;

void print(int board[7][6]);
void move(int board[7][6], int player);
bool check(int board[7][6]);

int main(void) {

	int board[7][6] {0};

	for(int i {0}; i < 42 && !check(board); i++) {
		print(board);
	}

	return 0;
}

void print(int board[7][6]) {
	for(int i {0}; i < 6; i++) {
		for(int j {0}; j < 7; j++) {
			cout << board[j][i];
		}
		cout << endl;
	}
}

void move (int board[7][6], int player) {
	int row, col;
	cout << "Enter the row you want to place on: ";
	cin >> row;
	cout << "Enter the column you want to place on: ";
	cin >> col;
	row--, col--;
	if(row >= 0 && row < 7 || col >= 0 && col < 6) {

	}
}

bool check(int board[7][6]) {
	static int count = 0;
	if (count == 0) {
		count++;
		return false;
	}

	return true;
}
