#include <iostream>
using namespace std;

const int ROWS = 13;

int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main() {
	const int COLS = 8;
	int rowIndex = 0;
	char seatIndex = ' ';
	char seats[COLS][ROWS] = {
	{'D','D','D','D','D','D','D','D','D','D','D','D',' '},
	{'C','C','C','C','C','C','C','C','C','C','C','C',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1','1','1','1'},
	{'1','2','3','4','5','6','7','8','9','0','1','2','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'B','B','B','B','B','B','B','B','B','B','B','B','B'},
	{'A','A','A','A','A','A','A','A','A','A','A','A','A'},
	};
	while (true) {
		cout << endl;
		for (int i = 0; i < COLS; i++) {
			displaySeatColumn(seats, i);
		}
		cout << endl << "Enter a seat or Q to quit: ";
		cin >> rowIndex >> seatIndex;
		if (cin.fail()) break;

		if (rowIndex > 13 || rowIndex < 1)
			cout << "Sorry, no such seating exists on the CRJ 200." << endl;
		else if (findSeatIndex(seatIndex) == -1)
			cout << "Sorry, no such seat exists on the CRJ 200." << endl;
		else if (rowIndex == 13 && (findSeatIndex(seatIndex) == 0 || findSeatIndex(seatIndex) == 1))
			cout << "Sorry, no such seat exists on the CRJ 200." << endl;
		else if (seats[findSeatIndex(seatIndex)][findRowIndex(rowIndex)] == 'X')
			cout << "Sorry, seat already assigned." << endl;
		else seats[findSeatIndex(seatIndex)][findRowIndex(rowIndex)] = 'X';
	}
}
int findRowIndex(int thisRow) {
	return thisRow - 1;
}
int findSeatIndex(char thisSeat) {
	switch (thisSeat) {
	case 'D': return 0;
	case 'C': return 1;
	case 'B': return 6;
	case 'A': return 7;
	}
	return -1;
}
void displaySeatColumn(char seats[][ROWS], int column) {
	for (int i = 0; i < ROWS; i++) {
		cout << " " << seats[column][i];
	}
	cout << endl;
}