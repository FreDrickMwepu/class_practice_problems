#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    string input, token;

    ifstream reader("text.txt");

    if (!reader.is_open()) {
        cerr << "Failed to open input file." << endl;
        return 1;
    }

    while (getline(reader, input)) {
        cout << input << endl;

        istringstream parser(input); 
        while (getline(parser, token, ' ')) { 
            cout << token << endl;
        }
    }

    reader.close();

    return 0;
}