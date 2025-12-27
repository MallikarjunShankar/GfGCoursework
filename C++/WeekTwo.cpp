#include <iostream>
using namespace std;

int arr[8][8] = {0};

void viewSeats() {
    cout << "Seat Layout (0 = available, 1 = booked):" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
}

void bookSingleSeat(int row, int col) {
    if (arr[row][col] == 0) {
        arr[row][col] = 1;
        cout << "Seat booked successfully." << endl;
    } else {
        cout << "Seat already booked." << endl;
    }
}

void bookSeats(int row, int colStart, int colEnd) {
    for (int j = colStart; j <= colEnd; j++) {
        if (arr[row][j] == 0) {
            arr[row][j] = 1;
        } else {
            cout << "Seat " << row << "," << j << " already booked." << endl;
        }
    }
    cout << "Seats booked successfully from " << colStart << " to " << colEnd << " in row " << row << "." << endl;
}

void cancelSeat(int row, int col) {
    if (arr[row][col] == 1) {
        arr[row][col] = 0;
        cout << "Seat cancellation successful." << endl;
    } else {
        cout << "Seat is not booked." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Menu:\n" << endl;
        cout << "1. View Seats\n2. Book Seat\n3. Book Multiple Seats\n4. Cancel Seat\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewSeats();
                break;
            case 2: {
                int row, col;
                cout << "Enter row and column to book seat: ";
                cin >> row >> col;
                bookSingleSeat(row, col);
                break;
            }
            case 3: {
                int row, colStart, colEnd;
                cout << "Enter row, start column and end column to book seats: ";
                cin >> row >> colStart >> colEnd;
                bookSeats(row, colStart, colEnd);
                break;
            }
            case 4: {
                int row, col;
                cout << "Enter row and column to cancel seat: ";
                cin >> row >> col;
                cancelSeat(row, col);
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
