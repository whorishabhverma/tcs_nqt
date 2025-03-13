// In a phone dictionary numbers are converted to alphabets using the following map
// [1-' .,', 2-'abc', 3-'def', 4-'ghi', 5-'jkl', 6-'mno', 7-'pqrs', 8-'tuv', 9-'wxyz']

// To get the alphabets, each key has to be pressed some number of times. i.e., for getting alphabet 'c', key #2 has to be pressed 3 times. Similarly, for getting alphabet 't', key #8 has to be pressed only once and for space, #1 has to be pressed once.

// Write a program that can translate the actual keystrokes into the alphabets. Assume that if the same key was used multiple times continuously for different alphabets, a space (represented by '0') will be added

// Input Format

// One line of string, containing only numeric values.

// Constraints

// 0<= inputStr.Length <= 100

// Output Format

// One alphabetical lowercase string that represents the string value of the given input

// Sample Input 0

// 44335550555666196667775553
// Sample Output 0

// hello world
// Explanation 0

// [1-' .,', 2-'abc', 3-'def', 4-'ghi', 5-'jkl', 6-'mno', 7-'pqrs', 8-'tuv', 9-'wxyz']

// Each number once represents the first digit, twice represents second and so on.

// 44 => h 33 => e 555 => l 0 => space (l used twice, to differentiate) 555 => l (2nd time) 666 => o 1 => ' ' 9 => 'w' 666 => 'o' 777 => 'r' 555 => 'l' 3 => 'd'



#include <iostream>
#include <unordered_map>
using namespace std;

string translateKeystrokes(const string &input) {
    unordered_map<char, string> keyMap = {
        {'1', " .,"}, {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"},
        {'9', "wxyz"}, {'0', " "}
    };

    string result;
    char prev = '\0';
    int count = 0;

    for (char ch : input) {
        if (ch == prev) {
            count++;  // Increase count if same key pressed again
        } else {
            if (prev != '\0' && prev != '0') {
                result += keyMap[prev][(count - 1) % keyMap[prev].size()];
            }
            if (ch == '0') {
                result += ' ';
            }
            prev = ch;
            count = 1;
        }
    }
    
    // Add last character
    if (prev != '\0' && prev != '0') {
        result += keyMap[prev][(count - 1) % keyMap[prev].size()];
    }

    return result;
}

int main() {
    string input;
    cout << "Enter keystrokes: ";
    cin >> input;

    cout << "Translated text: " << translateKeystrokes(input) << endl;
    return 0;
}
