#include <iostream>
using namespace std;

int main() {
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}
    };

    int row;
    int column;
    cout << " Enter row: ";
    cin >> row; 
    cout << " Enter column: ";
    cin >> column;

   
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << map[j][i];
        }
    }

    return 0;
}