#include <bits/stdc++.h>
using namespace std;

void generateSubsets(vector<int>& arr, int index, vector<int>& current, vector<vector<int>>& ans) {
    if (index == arr.size()) {
        ans.push_back(current); // Store the current subset
        return;
    }

    // Exclude the current element
    generateSubsets(arr, index + 1, current, ans);

    // Include the current element
    current.push_back(arr[index]);
    generateSubsets(arr, index + 1, current, ans);

    // Backtrack (remove the last element to explore the next possibility)
    current.pop_back();
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> current;
    
    generateSubsets(arr, 0, current, ans);
    
    // Print all subsets
    for (auto& subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
