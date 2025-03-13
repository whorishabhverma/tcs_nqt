#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string roman) {
    unordered_map<char, int> romanMap = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int sum = 0, prev = 0;
    for (int i = roman.length() - 1; i >= 0; i--) {
        int curr = romanMap[roman[i]];
        sum += (curr < prev) ? -curr : curr;
        prev = curr;
    }
    return sum;
}

int main() {
    string roman;
    cin>>roman;
    cout << romanToInt(roman) << endl; // Output: 1994
    return 0;
}
