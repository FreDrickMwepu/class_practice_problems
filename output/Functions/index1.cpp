#include <iostream>
using namespace std;

//define the toSeconds() function here
int toSeconds(int days) {
    int second = days * (24*60*60);
    return second;
}

int main() {
    int days;
    cout << " Enter number of days: ";
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}