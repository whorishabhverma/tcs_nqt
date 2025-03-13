#include<bits/stdc++.h>
using namespace std;

void getAnagrams(int n, vector<string> str1) {
    // Map to store first occurrence of each sorted string with its index
    map<string, int> firstOccurrence;
    // Map to store sorted string with vector of original strings
    vector<vector<string>> groups(n);
    
    for(int i = 0; i < n; i++) {
        string str = str1[i];
        sort(str.begin(), str.end());
        
        if(firstOccurrence.find(str) == firstOccurrence.end()) {
            firstOccurrence[str] = i;
        }
        groups[firstOccurrence[str]].push_back(str1[i]);
    }
    
    // Print only non-empty groups
    for(int i = 0; i < n; i++) {
        if(!groups[i].empty()) {
            for(auto word : groups[i]) {
                cout << word << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    getAnagrams(n, str);
    return 0;
}


ye code h sahi