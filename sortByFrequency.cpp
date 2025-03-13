
#include <bits/stdc++.h>
using namespace std;

// Comparator function to sort by frequency (descending) and value (ascending)
bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first)
        return a.second < b.second;  // If frequency is same, sort by value (ascending)
    return a.first > b.first;  // Sort by frequency (descending)
}
class Solution {
public:
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> freqMap;
        
        // Count frequencies
        for (int num : arr) {
            freqMap[num]++;
        }

        // Convert to vector of {frequency, value}
        vector<pair<int, int>> freqVec;
        for (auto &entry : freqMap) {
            freqVec.push_back({entry.second, entry.first});
        }
        // Sort based on frequency (desc) and value (asc)
        sort(freqVec.begin(), freqVec.end(), comp);
        vector<int> ans;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].first;j++){
                ans.push_back(vec[i].second);
            }
        } 
        return ans;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        getline(cin, input);
        stringstream s2(input);
        
        vector<int> arr;
        int num;
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution obj;
        vector<int> v = obj.sortByFreq(arr);
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
