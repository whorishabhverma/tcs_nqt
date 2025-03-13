#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int arr[n + 1];        // Increase size to n+1 for 1-based indexing
    int prefixSum[n + 1];  // Same for prefixSum

    prefixSum[0] = 0;  // Initialize prefixSum[0] to avoid garbage value

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << "Prefix Sum from " << l << " to " << r << " : ";
        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }
    
    return 0;
}
