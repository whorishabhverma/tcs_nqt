#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read entire input as a string

    stringstream ss(input);
    int T;
    ss >> T;  // Extract number of hours

    vector<int> E(T), L(T);
    for (int i = 0; i < T; i++) {
        ss >> E[i];  // Read E[] values
    }
    for (int i = 0; i < T; i++) {
        ss >> L[i];  // Read L[] values
    }

    int maxGuests = 0, currentGuests = 0;

    // Compute max guests at any instance
    for (int i = 0; i < T; i++) {
        currentGuests += E[i] - L[i];  // Net guests at this hour
        maxGuests = max(maxGuests, currentGuests);
    }

    cout << maxGuests << endl;  // Print maximum guests at any instance
    return 0;
}
