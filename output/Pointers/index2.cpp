#include <iostream>
using namespace std;

int main() {
    // Declare an array called ages to store the ages of employees
    int ages[] = {25, 30, 35, 40, 45};

    // Calculate the number of employees
    int numEmployees = sizeof(ages) / sizeof(ages[0]);

    // Calculate the sum of all ages
    int sum = 0;
    for (int i = 0; i < numEmployees; ++i) {
        sum += ages[i];
    }

    // Calculate the average age
    double average = static_cast<double>(sum) / numEmployees;

    // Output the average age
    std::cout << "The average age of the employees is: " << average << std::endl;

    return 0;
}
