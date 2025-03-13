/*
Given an array arr[] of integers, find out the maximum difference between any two 
elements such that larger element appears after the smaller number. */
#include<bits/stdc++.h>
using namespace std;
int maxDiff(vector<int>&arr){
    int n=arr.size();
    vector<int> suffix(n);
    suffix[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(suffix[i+1],arr[i]);
    }

    int maxi=INT_MIN;
    for(int i=0;i<n-1;i++){
        maxi=max(maxi,suffix[i+1]-arr[i]);
    }
    return maxi;

} 
int main(){
vector<int> arr{80, 2, 6, 3, 100};
cout << "Maximum difference is " << maxDiff(arr);
return 0;
}
