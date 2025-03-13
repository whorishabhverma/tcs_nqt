
//overlapping sum problems 
#include<bits/stdc++.h>
using namespace std;
//******************************memoization**************
int fm(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fm(n-1,dp) + fm(n-2,dp);
}
//********************tabulation*************************
int ft(int n,vector<int>&dp){
    dp[0]=0; dp[1]=1;
    if(dp[n] != -1) return dp[n];
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] +dp[i-2];
    }
    return dp[n];
}
int main(){
    int n; cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fm(n,dp);
}