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
long long power(long a, long b)
{

    if (b == 0)
    {
        return 1 ;
    }
    long long half_power = power(a, b / 2);
    if (~b & 1)
    {
        return half_power * half_power*1ll;
    }
    else
    {
        return half_power * half_power * a*1ll;
    }
}

    int main()
    {
            long long a,b;
            cin>>a>>b;
            cout<<power(a,b);

        return 0;
    }
