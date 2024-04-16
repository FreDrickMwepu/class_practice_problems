// The following program illustrates the basic use of the struct in cpp
// Written Fredrick Mwepu
// 12th/02/2024

#include <iostream>
using namespace std;


int main() {

    
    int grade[2][3];
   
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> grade[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << grade[i][j];
        }
    }
    
    cout << endl;

    return 0;
}
