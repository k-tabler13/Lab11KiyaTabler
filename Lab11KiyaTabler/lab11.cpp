//two-dimensional array that allows someone to reserve seats on a CRJ 200. 

// 

#include <iostream> 
#include <string>

using namespace std;

const int ROWS = 4;
const int COLUMNS = 13;
int seats[ROWS][COLUMNS];
const int ERROR = X; 

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow);
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat);
// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][ROWS], int column);

int findRowIndex(int thisRow) {
    if (thisRow < 1 || thisRow > ROWS) {
        return -1; // Invalid row
    }
    return thisRow - 1; // Convert to 0-based index
}

char seats[ROWS][COLUMNS] = {
       {'D', 'D', 'D', 'D'}, {'D', 'D', 'D', 'D'}, {'D', 'D', 'D', 'D'},
       {'C', 'C', 'C', 'C'}, {'C', 'C', 'C', 'C'}, {'C', 'C', 'C', 'C'},
       {'A', 'A', 'A', 'A'}, {'A', 'A', 'A', 'A'}, {'A', 'A', 'A', 'A'},
       {'B', 'B', 'B', 'B'}, {'B', 'B', 'B', 'B'}, {'B', 'B', 'B', 'B'} };




int findSeatIndex(char thisSeat) {

    while (true) {
        cout << "D D D D D D D D D D D D" << endl;
        cout << "C C C C C C C C C C C C" << endl;
        cout << "                  1 1 1 1" << endl;
        cout << "1 2 3 4 5 6 7 8 9 0 1 2 3" << endl;
        cout << "A A A A A A A A A A A A A" << endl;
        cout << "B B B B B B B B B B B B B" << endl;

        // Print the seating chart
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                if (seats[i][j] == ERROR) {
                    cout << "X ";
                }
            }
            cout << endl;
        }

        int main(); { 
            const char seatRequest = 0; 

        //prompt user for a seat reservation 


         // Check if the user wants to quit
        if (seatRequest == "Q" || seatRequest == "q") {
            cout << "Thank you for using the reservation system." << endl;
            break;
        }

        // Validate seat request format (2 characters: row number + seat letter)
        if (seatRequest.length() == 2) {
            // Convert row to integer
            row = seatRequest[0] - '0'; // Row is a number, so we subtract '0' to convert it to integer
            char seatLetter = seatRequest[1]; // Get the seat letter

            // Check if the row is valid (1-13)
            if (row < 1 || row > 13) {
                cout << "Sorry, no such seat exists on the CRJ 200." << endl;
                continue;
            }

            // Convert seat letter to uppercase manually
            if (seatLetter >= 'a' && seatLetter <= 'z') {
                seatLetter = seatLetter - ('a' - 'A'); // Convert to uppercase
            }

            // Check if the seat letter is valid (A, B, C, D)
            if (seatLetter != 'A' && seatLetter != 'B' && seatLetter != 'C' && seatLetter != 'D') {
                cout << "Sorry, no such seat exists on the CRJ 200." << endl;
                continue;
            }

            // Convert seat letter to column index (A -> 0, B -> 1, C -> 2, D -> 3)
            col = (seatLetter == 'A') ? 0 : (seatLetter == 'B') ? 1 : (seatLetter == 'C') ? 2 : 3;

            // Adjust for 1-based row input and check if the seat is already reserved
            row--; // Convert to 0-based row index
            if (seats[ROWS][COLUMNS]) {
                cout << "Sorry, that seat is already taken. Please choose another seat." << endl;
            }
            else {
                // Mark the seat as reserved
                seats[ROWS][COLUMNS];
            }
        }
        else {
            cout << "Invalid seat format. Please try again." << endl;
        }
    }

    return 0;
}


}

}
