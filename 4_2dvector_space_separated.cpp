#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<vector<int>> matrix;
    string line;

    cout << "Enter the matrix row-wise (space-separated values). Enter an empty line to stop:\n";

    while (true) {
        getline(cin, line); // Read entire line

        if (line.empty()) break; // Stop when an empty line is entered

        stringstream ss(line); // Convert line into stringstream
        vector<int> row;
        int num;

        while (ss >> num) { // Extract numbers from the stream
            row.push_back(num);
        }

        matrix.push_back(row); // Add row to the matrix
    }

    // Display the matrix
    cout << "The entered matrix is:\n";
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
