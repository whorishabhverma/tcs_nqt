#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> arr(4);
    
    for (int i = 0; i < 4; i++) {
        ss >> arr[i];
    }

    // Precomputed index permutations
    vector<vector<int>> ans = {
        {0,1,2,3}, {0,1,3,2}, {0,2,1,3}, {0,2,3,1}, {0,3,1,2}, {0,3,2,1},
        {1,0,2,3}, {1,0,3,2}, {1,2,0,3}, {1,2,3,0}, {1,3,0,2}, {1,3,2,0},
        {2,0,1,3}, {2,0,3,1}, {2,1,0,3}, {2,1,3,0}, {2,3,0,1}, {2,3,1,0},
        {3,0,1,2}, {3,0,2,1}, {3,1,0,2}, {3,1,2,0}, {3,2,0,1}, {3,2,1,0}
    };

    set<string> validTimes; // Store unique valid times
    
    // Use precomputed permutations
    for (auto &perm : ans) {
        int a = arr[perm[0]], b = arr[perm[1]];
        int c = arr[perm[2]], d = arr[perm[3]];

        int hour = a * 10 + b;
        int minute = c * 10 + d;
         
        if (hour < 24 && minute < 60) {
            string hh = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
            string mm = (minute < 10) ? "0" + to_string(minute) : to_string(minute);
            validTimes.insert(hh + ":" + mm);
        }
    }

    // Print unique valid times
    for (const auto &time : validTimes) {
        cout << time << endl;
    }

    return 0;
}






#include <bits/stdc++.h>
using namespace std;

int main() {
    string input, s;
    int n;
    
    // Read the full input line
    getline(cin, input);
    stringstream ss(input);
    ss >> s >> n;  // Extract string and integer from input

    // Swap first and last N characters
    string result = s.substr(s.length() - n) + s.substr(n, s.length() - 2 * n) + s.substr(0, n);
    
    // Output the modified string
    cout << result << endl;

    return 0;
}
