#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 7, 5};
    int s = 12; // Desired sum
    int n = arr.size();

    int start = 0, end = 0, sum = 0, maxLen = 0;

    while (end < n) {
        // Expand the window
        sum += arr[end];
        
        // Check if current window matches the target sum
        if (sum == s) {
            maxLen = max(maxLen, end - start + 1);
        }
        
        // Shrink the window if sum exceeds s
        while (sum > s && start <= end) {
            sum -= arr[start];
            start++;
        }

        // Move the end pointer
        end++;
    }

    cout << "Largest subarray length: " << maxLen << endl;
    return 0;
}    