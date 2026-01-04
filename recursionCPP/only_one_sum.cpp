#include <bits/stdc++.h>
using namespace std;
bool sum_of(vector<vector<int>>& ans,vector<int>& arr,vector<int>& curr ,int sum , int i , int k){
    if(i==arr.size()){
        if(sum==k){
        ans.push_back(curr);
        return true;
        }
        return false;
    }
    curr.push_back(arr[i]);
    if(sum_of(ans,arr,curr,sum+arr[i],i+1,k)) return true;
    curr.pop_back();
    if(sum_of(ans,arr,curr,sum,i+1,k)) return true;
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     vector<int> arr = {17, 18, 6, 11, 2, 4};
    int k = 6;
    vector<vector<int>> ans;
    vector<int> curr;
    int i=0;
    int sum=0;
    if(sum_of(ans,arr,curr,sum,i,k)) {
        cout << "Found a subset with the given sum:\n";
       for(auto i:ans) {
        for(auto j:i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}    else {
        cout << "No subset with the given sum exists.\n";
    }
    return 0;
}
