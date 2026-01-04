#include<bits/stdc++.h>
using namespace std;
    int BS(vector<int>& arr, int st , int end, int target){
        if(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target){
            return BS(arr,st,mid-1,target);
        }
        else {
            return BS(arr,mid+1,end,target);
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5,7,9,12,45,85,95,123,452,659};
    int st=0;
    int end=arr.size()-1;
    int target=1234;
    cout<<BS(arr,st,end,target);
    return 0;
}