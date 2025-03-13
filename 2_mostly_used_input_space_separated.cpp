#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
vector<int> input_space_separated() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}
int main() {
    //// Case 2: 1 2 3 4 5
    vector<int> arr = input_space_separated();
    cout << "Case 2: 1 2 3 4 5" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}