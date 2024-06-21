#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define si set<int>

#define li long
#define endl "\n"
const int MOD = 1e9 + 7;

using namespace std;

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, max_odd = 0;
    long long even_factor = 1, odd_sum = 0;
    int even_ct = 0;
    cin >> n;
    vi num(n);
    for (int i = 0; i < n; i++) {
      cin >> num[i];
      if (num[i] & 1) {
        odd_sum += num[i];
        max_odd = max(max_odd, num[i]);
      } else {
        even_factor *= num[i];
        even_ct++;
      }
    }
    odd_sum -= max_odd;
    if (odd_sum == 0 && max_odd==0) {

      long long ans = even_factor + even_ct-1;
      cout<<ans<<endl;
    } else {

      long long ans = odd_sum + even_factor * max_odd + even_ct;
      cout << ans << endl;
    }
  }

  return 0;
}
