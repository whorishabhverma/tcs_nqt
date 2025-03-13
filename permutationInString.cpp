#include<bits/stdc++.h>
using namespace std;
bool permutationInString(string s1,string s2){
    map<char,int> mp1,mp2;
    for(auto ele:s1) mp1[ele]++;
    int l=0,r=0,n1=s1.length(),n2=s2.length();
    while(r<n2){
        mp2[s2[r]]++;
        if(r-l+1==n1){
            if(mp1==mp2) return true;
            mp2[s2[l]]--;
            if(mp2[s2[l]]==0) mp2.erase(s2[l]);
            l++;
        }
        r++;
    }
    return false;
}
int main(){
    string s1 = "ab", s2 = "eidbaooo";
    cout<<permutationInString(s1,s2);
    cout<<endl;
    s1 = "ab", s2 = "eidboaoo";
    cout<<permutationInString(s1,s2);


}


