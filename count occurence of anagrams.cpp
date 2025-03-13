#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt) {
    unordered_map<char, int> mp1, mp2;
    
    // Count frequency of each character in the pattern
    for (auto it : pat) {
        mp1[it]++;
    }
    
    int l = 0, r = 0, n = txt.length(), count = 0;
    
    while (r < n) {
        // Add the character at the right pointer to the current window map
        mp2[txt[r]]++;
        
        // If the window size matches the pattern length, check if they match
        if (r - l + 1 == pat.length()) {
            if (mp1 == mp2) {
                count++; // Found an anagram of the pattern
            }
            
            // Shrink the window from the left
            mp2[txt[l]]--;
            if (mp2[txt[l]] == 0) {
                mp2.erase(txt[l]);
            }
            l++; // Move the left pointer
        }
        r++; // Move the right pointer
    }
    
    return count; // Return the count of anagrams found
}

int main() {
    string txt = "forxxorfxdofr";
    string pat = "for";
    
    int result = search(pat, txt);
    cout << "Number of anagrams of the pattern in the text: " << result << endl;
    
    return 0;
}
