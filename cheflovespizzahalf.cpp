#include <bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
   
   while(t--){
       long long n;
       cin>>n;
       long long powerOf2 = 1;
       while(powerOf2<n){
           powerOf2 *=2;
       }
       if(powerOf2 == n) cout<<"0"<<endl;
       else{
           long long ans = 2*n - powerOf2;
           cout<<ans<<endl;
       }
   }
    }
