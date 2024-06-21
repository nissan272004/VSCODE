
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
void all_subsequence(int ind, vi &ds, vi arr, int n, int target)
{

    if (target == 0)
    {

        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (target < arr[i])
            break;
        ds.push_back(arr[i]);
        target -= arr[i];
        all_subsequence(ind + 1, ds, arr, n, target);
        target += arr[i];
        ds.pop_back();
    }
}

int main()
{
    vi arr = {1, 1, 3, 5};
    sort(arr.begin(), arr.end());
    vi ds;
    all_subsequence(0, ds, arr, 4, 5);

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
