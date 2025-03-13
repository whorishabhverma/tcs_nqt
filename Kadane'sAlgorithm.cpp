#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int>&arr){
    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<arr.size();i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0) prefix=0;
    }
    return maxi;
}
int main(){
    vector<int> arr{1,2,3,5,35,-15,-9};
    cout<<kadane(arr);
}