#include <bits/stdc++.h>


vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    int l = 0, r = 0;
    vector<long long> ans;
    queue<long long> listu;

    while (r < n) {
        // Add negative numbers to the queue
        if (arr[r] < 0) {
            listu.push(arr[r]);
        }

        // Process the window when its size equals k
        if (r - l + 1 == k) {
            // Add the first negative integer of the window
            if (!listu.empty())
                ans.push_back(listu.front());
            else
                ans.push_back(0);

            // Shrink the window
            if (arr[l] == listu.front()) {
                listu.pop();
            }
            l++;
        }

        // Expand the window
        r++;
    }

    return ans;
}



int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    firstNegativeNumberInWindow(arr, k);
    return 0;
}
