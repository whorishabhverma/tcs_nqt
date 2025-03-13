//https://www.youtube.com/watch?v=jCK_y0h8VVE
// code story with mik
class Solution {
public:
//solution : 1
/*
int dp[1001][1001];
bool check(string &s,int i,int j){
    if(i>=j) return true;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]) return dp[i][j] = check(s,i+1,j-1);
    return dp[i][j] = false;
}
    int countSubstrings(string s) {
        memset(dp,-1,sizeof(dp));
        int n=s.length(),count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
*/
int countSubstrings(string s){
    int n=s.length(),count=0;
    vector<vector<bool>>dp(n,vector<bool>(n,false));
    for(int l=1;l<=n;l++){
        for(int i=0;i+l-1<n;i++){
            int j=i+l-1;
            if(i==j){
                dp[i][i]=true;
            }else if(i+1==j){
                dp[i][j] = (s[i]==s[j]);
            }else{
                dp[i][j] = s[i]==s[j] && dp[i+1][j-1];
            }
            if(dp[i][j]==true){
                count++;
            }
        }
    }
    return count;
    //code story with mik
}

};