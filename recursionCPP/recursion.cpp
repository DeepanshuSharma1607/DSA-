#include<bits/stdc++.h>
using namespace std;
int fibbo(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    int ans=fibbo(n-1)+fibbo(n-2);
    cout<<ans<<endl;
    return ans;
}
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
int main(){
// cout<<sum(4)<<endl;
fibbo(6);
    return 0;
}