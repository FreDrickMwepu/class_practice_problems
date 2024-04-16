#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("input.txt"); // Open input file
    if (!inputFile) {
        cerr << "Failed to open input file." << endl;
        return 1;
    }
    
    ofstream outputFile("output.txt"); // Open output file
    if (!outputFile) {
        cerr << "Failed to open output file." << endl;
        return 1;
    }
    
    string line;
    while (getline(inputFile, line)) { // Read from input file line by line
        // Process line if needed
        // For example, you can manipulate the data here
        
        // Write line to output file
        outputFile << line << endl;
    }
    
    // Close files
    inputFile.close();
    outputFile.close();
    
    cout << "File read and write successful." << endl;
    
    return 0;
}