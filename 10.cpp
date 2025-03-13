#include <bits/stdc++.h>
using namespace std;

string CustomCaesarCipher(int key, string message) {
    if (key < 0) return "INVALID INPUT"; // Key should not be negative

    string result;
    for (char ch : message) {
        if (isalpha(ch)) { // Shift alphabets
            char base = isupper(ch) ? 'A' : 'a';
            result += (ch - base + key) % 26 + base;
        } 
        else if (isdigit(ch)) { // Shift digits
            result += (ch - '0' + key) % 10 + '0';
        } 
        else { // Keep special characters unchanged
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);

    // Extract words
    stringstream ss(input);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    // Validate and extract key
    if (words.empty() || !all_of(words.back().begin(), words.back().end(), ::isdigit)) {
        cout << "INVALID INPUT" << endl;
        return 0;
    }
    
    int key = stoi(words.back());
    words.pop_back();

    // Construct the message
    string message;
    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) message += " ";
        message += words[i];
    }

    // Encrypt and print
    string encryptedText = CustomCaesarCipher(key, message);
    cout << "The encrypted Text is: " << encryptedText << endl;
    
    return 0;
}
