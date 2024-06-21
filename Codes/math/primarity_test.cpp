#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define si set<int>

#define li long
#define endl "\n"
const int MOD = 1e9 + 7;

using namespace std;
bool is_prime(int n) {
  if(n==1){
    return false;
  }
  for (int i = 2; i < sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
    return true;
}

signed main() { 
        int n;
        while (cin>>n) {
            if(is_prime(n)){
                cout<<"Prime"<<endl;
            }
            else{
                cout<<"Not prime"<<endl;
            }
        }
    
    return 0; 
    
    }
