#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    vector<int> v(26, 0); // Frequency array for 26 letters

    for (char c : s) v[c - 'a']++; // Increment count for `s`
    for (char c : t) {
        v[c - 'a']--; // Decrement count for `t`
        if (v[c - 'a'] < 0) return false; // More occurrences in `t` than in `s`
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (isAnagram(s, t) ? "true" : "false") << endl;
    return 0;
}
