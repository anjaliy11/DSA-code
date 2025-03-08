#include <iostream>
#include <cmath>  // For pow function
using namespace std;

void countNode(int i) {
    cout << (1 << (i - 1)) << endl;  // Using bitwise left shift for 2^(i-1) for faster computation
}

int main() {
    int i;
    cin >> i;   // Take input from user
    countNode(i);
    return 0;
}
