#include <bits/stdc++.h>
#define vi vector<long long>
#define endl "\n"
using namespace std;
const int N = 100;
int main()
{
    vi fact(N + 1, 1);
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N + 1; i++)
    {
        fact[i] = i * fact[i - 1];
    }

    // time  complexitity O(n)
    // for tescases O(n)
    // for naive method time complexity O(n*t)
    return 0;
}
