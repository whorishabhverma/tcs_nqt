#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> input_array_format() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    char c;
    int num;

    while (ss >> c) {
        if (isdigit(c) || c == '-') {  // Handle negative numbers
            ss.unget();  // Put the digit back into the stream
            ss >> num;  // Extract full number
            arr.push_back(num);
        }
    }
    return arr;
}
int main() {
    // Case 1: [1,2,3,4,5]
    vector<int> arr1 = input_array_format();
    cout << "Case 1: [1,2,3,4,5]" << endl;
    for (int num : arr1) {
        cout << num << " ";
    }
    return 0;
}