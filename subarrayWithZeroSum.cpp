#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> st;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0 || st.find(sum)!=st.end()){
                return true;
            }
            st.insert(sum);
        }      
        return false;
    }
int main()
{
    int arr[] = {-3, 2, 3, 1, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
    if (subArrayExists(arr, N))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}
/*
arr[] = {1, 4, -2, -2, 5, -4, 3}
Consider all prefix sums, one can notice that there is a subarray with 0 sum when :
Either a prefix sum repeats
Or, prefix sum becomes 0.
*/

