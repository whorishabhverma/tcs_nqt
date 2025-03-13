#include<bits/stdc++.h>
using namespace std;
void longestPalindrome(string &s) {
    int n = s.length();
    // if (n == 0) return ""; // Edge case: empty string
    string ans="";
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int maxLength = 1, start = 0; // Track longest palindrome start index and length

    for (int len = 1; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            if (i == j) {
                dp[i][i] = true;  // Single character is always a palindrome
            } else if (i + 1 == j) {
                dp[i][j] = (s[i] == s[j]);  // Two-character case
            } else {
                dp[i][j] = (s[i] == s[j]) && dp[i + 1][j - 1];  // General case
            }
            // if (dp[i][j]==true) {
                // cout<<s.substr(i,len)<<" "<<len<<endl;
                //    same length ke ek se jyada string palindrome ho skti h but hme sirf phli chahiye
                //    iske liye hum update nhi krenge , update tb krenge jb previous se bdi mile
            // }
            if (dp[i][j]==true && len>maxLen) {
                maxLen  = len;
                ans = s.substr(i,len);
            }
        }
    }
    // cout<<ans;
} 
int main(){
    string str="bswrhxboawtdfqggqfdtwyypwnssnwpyyaobxhrwsb";
    longestPalindrome(str);
}

//correct main function accordingly 
// https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
