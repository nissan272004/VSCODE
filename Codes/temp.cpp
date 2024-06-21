#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define si set<int>

#define li long 
#define endl "\n"
const int MOD=1e9+7;

using namespace std;

long long power(int b,int n){
    if(n==0){
        return 1;
    }
    long long half_ans=power(b,n/2);
    if (n&1) {
            return half_ans*half_ans*b;
    }
    else{
        return half_ans*half_ans;
    }
}

signed main()
{

    cout<<power(7,100);    

    return 0;
}
