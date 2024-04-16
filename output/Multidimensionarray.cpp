// The following program is a Multi-dimensional Array 
#include <iostream>
using namespace std;

int main() {
 // Define the game map as a two-dimensional array
    int map[5][5] = {
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 0, 0, 0, 1}
    };

    int row, column;

    // Prompt the user to enter the row and column indices
    cout << "Enter the row index: ";
    cin >> row;
    cout << "Enter the column index: ";
    cin >> column;

    // Validate the input indices
    if (row < 0 || row >= 5 || column < 0 || column >= 5) {
        cout << "Invalid indices. Please enter row and column indices between 0 and 4." << std::endl;
        return 1; // Exit with error code 1
    }

    // Output the corresponding value from the map array
    cout << "Value at row " << row << " and column " << column << " is: " << map[row][column] << std::endl;

    
    return 0;
}
