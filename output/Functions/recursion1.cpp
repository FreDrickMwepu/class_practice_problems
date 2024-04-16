#include <iostream>
using namespace std;


// Functions 
int fb(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fb(n - 1) + fb(n - 2);
    }

}
int main() {
    int arg = 5;
    
    cout << " The Fibonnaci of " << arg << " terms: ";
    for (int i = 0; i < arg; i++) {
        cout << fb(i);
    }

    return 0;
}