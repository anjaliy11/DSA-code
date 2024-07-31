#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int A[N];
        set<int> uniqueElements;
        for(int i = 0; i < N; i++){
            cin >> A[i];
            if(A[i] != 0) {
                uniqueElements.insert(A[i]);
            }
        }
        if(uniqueElements.size() <= 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
