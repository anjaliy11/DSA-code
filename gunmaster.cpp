#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T-- > 0) {
        int N, D;
        cin >> N >> D;
        
        vector<int> arr(N);
        
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        int count = 0;
        
        for (int i = 0; i < N - 1; i++) {
            if ((arr[i] > D && arr[i + 1] <= D) || (arr[i] <= D && arr[i + 1] > D)) {
                count++;
            }
        }
        
        if (arr[0] > D) {
            count++;
        }
        
        cout << count << endl;
    }
    
    return 0;
}
