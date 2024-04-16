// Arrys with Dynamic Memory  

#include <iostream>
using namespace std;

int main() {
    // Thi is going to be the size of the array
    int n;
    cout << "Enter a number: " << endl;
    cin >> n; 

    // Dynamically allocate memory for an array of integers
    int* nums = new int[n];

    // Fill the array with values
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;
    
    // Deallocate the dynamically allocated memory
    delete[] nums;

}