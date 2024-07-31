#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        string S;
        cin >> S;
        
      
        int minFlips = min(n, 2 - (S[0] - '0') - (S[n - 1] - '0'));
        
        cout << minFlips <<endl;
    }
    return 0;
}
