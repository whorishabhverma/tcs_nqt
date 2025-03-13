#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {100,200,300,400};
    int k=2,maxi=-1,sum=0,n=arr.size();
    int start=0,end=0;
    while(end<n){
        sum+=arr[end];
        if(end-start+1 == k){
            maxi = max(maxi,sum);
            sum-=arr[start];
            start++;
        }
        end++;
    }
    cout <<  maxi;
}    