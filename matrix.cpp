#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read the entire input as a string

    stringstream ss(input);
    int R, C;
    ss >> R >> C;  // Extract row and column count

    vector<vector<int>> matrix(R, vector<int>(C));  // Initialize R x C matrix

    // Read R*C values into the matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            ss >> matrix[i][j];
        }
    }

    // Print the extracted matrix
    cout << "Extracted Matrix:\n";
    for (const auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
