
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
int  all_subsequence(int i, vi arr, int n, int s, int sum)
{
    if (i == n)
    {
        if (sum == s)
        {
            return 1;
        }
        else return 0;
    }
    // pick
 
    s += arr[i];
    int l=all_subsequence(i + 1, arr, n, s, sum);
    s -= arr[i];

    // not pick
   int r= all_subsequence(i + 1, arr, n, s, sum);
   return l+r;
}

int main()
{
    vi arr = {1, 2,3};

   cout<< all_subsequence(0, arr, 3, 0,2 );
    

    return 0;
}
