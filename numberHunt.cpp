#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 

bool checkHere(ll n){ 
    for(ll i = 2; i * i <= n; i++){ 
        if(n % i == 0) return false; 
    } 
    return true; 
} 

ll find(ll n){ 
    vector<ll> black; 
    while(black.size() < 2){ 
        if(checkHere(n)) black.push_back(n); 
        n++; 
    } 
    return black[0] * black[1]; 
} 

signed main() { 
    ll tt; 
    cin >> tt; 
    while(tt--){ 
        ll n; 
        cin >> n; 
        if(n == 1) n++; 
        cout << find(n) << endl; 
    } 
    return 0; 
}