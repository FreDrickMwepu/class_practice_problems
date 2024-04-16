// Creating program that displays the values 1 to 1000

#include <iostream>
using namespace std;

int main() {

    // for (int i = 1; i <= 1000; i++)
    // cout << i << endl;
    // for(int a=2;a<10;a+=3) {
    // cout << a << endl;
    // for(int i=0;i<10;i++) {
    //     if(i==5) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    for(int x=1;x<10;x++) {
  if(x == 2) {
    continue; 
  }
  if(x == 5) {
    break;
  }
  cout << x << endl;
}
    return 0;
}

