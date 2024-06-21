
#include <bits/stdc++.h>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define msi map<string, int>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define li long int
#define lli long long int
#define endl "\n"
using namespace std;
vvi ans;
void all_subsequence(int i, vi &ds, vi arr, int n, int s, int sum)
{
    if (i == n)
    {
        if (sum == s)
        {

            ans.push_back(ds);
        }
        return;
    }
    // pick
    ds.push_back(arr[i]);
    s += arr[i];
    all_subsequence(i + 1, ds, arr, n, s, sum);
    s -= arr[i];
    ds.pop_back();

    // not pick
    all_subsequence(i + 1, ds, arr, n, s, sum);
}

int main()
{
    vi arr = {1, 2, 3, 4};
    vi ds;
    all_subsequence(0, ds, arr, 4, 0, 4);
    
    for (auto v : ans)
    {

        for (auto element : v)
        {
            cout << element << " ";
        }

        cout << endl;
    }
    return 0;
}
