#include <bits/stdc++.h>
using namespace std;

#define int long long

int calculate_min_elements(int target, const vector<int> &elements)
{
    int bitwise_or = 0, count = 0;
    for (const auto &element : elements)
    {
        if (element > target)
            continue;
        bitwise_or |= element;
        count++;
    }

    return (bitwise_or == target ? elements.size() - count : elements.size());
}
void cpsolve()
{
    int array_size;
    cin >> array_size;
    vector<int> elements(array_size);
    for (auto &element : elements)
        cin >> element;

    int minimum_elements = array_size;
    for (int i = 0; i < 32; i++)
    {
        int target = (1 << i) - 1;
        minimum_elements = min(minimum_elements, calculate_min_elements(target, elements));
    }
    




    cout << minimum_elements << endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cpsolve();}
        return 0;
}