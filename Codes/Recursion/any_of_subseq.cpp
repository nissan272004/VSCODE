
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
bool all_subsequence(int i, vi &ds, vi arr, int n, int s, int sum) {
  if (i == n) {
    if (sum == s) {
      return true;
    } else
      return false;
  }
  // pick
  if (arr[i] <= sum - s) {

    ds.push_back(arr[i]);
    s += arr[i];
    if ((all_subsequence(i, ds, arr, n, s, sum)) == true)
      return 1;
    s -= arr[i];
    ds.pop_back();
  }

  // not pick
  if ((all_subsequence(i + 1, ds, arr, n, s, sum)) == true)
    return 1;
  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    vi arr = {2020, 2021};
    vi ds;
    int num;
    cin>>num;
    all_subsequence(0, ds, arr, 2, 0, num);

    if (ds.size() > 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
