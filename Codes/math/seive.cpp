#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define si set<int>

#define li long
#define endl "\n"
const int MOD = 1e9 + 7;
const int maxN = 1e6;
using namespace std;
vector<bool> prime(maxN, true);
void store_primes() {
  prime[0] = 0;
  prime[1] = 0;
  for (int i = 2; i < sqrt(maxN); i++) {
    if (prime[i]) {
      for (int j = i * i; j < maxN; j++) {
        prime[j]=0;
      }
    }
  }
}

signed main() { 
        store_primes();
        int n;
        while(cin>>n){
        if(prime[n]){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Nprime"<<endl;
        }
        }
    
    return 0; 
    }
