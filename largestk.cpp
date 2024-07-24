#include <bits/stdc++.h>
using namespace std;

int largestK(const std::vector<int>& A) {
    
    std::unordered_map<int, int> freq;
    for (int num : A) {
        freq[num]++;
    }

    std::vector<int> freqValues;
    for (const auto& entry : freq) {
        freqValues.push_back(entry.second);
    }
    std::sort(freqValues.rbegin(), freqValues.rend());

    int total = 0;
    
    int K = 0;

    for (int i=1;i<= freqValues.size();++i) {
        
        total += freqValues[i-1];
        int value = (total/i)*i;
K = max(value,K);
       
    }

    return K;
}

int main() {
   
    int T;
    cin >> T;
    
    while (T--) {
        
        int N;
        cin >> N;
      
        std::vector<int> A(N);
       for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
       
        cout << largestK(A) << endl;
    }

    return 0;}
