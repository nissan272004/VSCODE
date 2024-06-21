#include <bits/stdc++.h>

// pair
#define pii pair<int, int>
#define psi pair<string, int>
#define pis pair<int, string>
#define pss <string,string>

// vector
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vvs vector<vector<string>>

// map
#define mii map<int, int>
#define umii unordered_map<int, int>
#define msi map<string, int>
#define umsi unordered_map<string, int>

// set
#define si set<int>
#define usi unordered_set<int>

// mis
#define li long 
#define int long long
#define endl "\n"
const int MOD=1e9+8;
#define loop(i,f,l,k) for(int i=f;i<l;i+=k)
#define loopin(i,f,l,k) for(int i=f;i<=l;i+=k)
#define revloopin(i,f,l,k) for(int i=f;i>=l;i-=k)
#define revloop(i,f,l,k) for(int i=f;i>l;i-=k)
vvi ans;


void combo(int ind,int n,int target,vi arr,vi &ds){
    if(ind==n){
        if(target==0){
            ans.push_back(ds);
        }
        return ;
    }

    //pick
    if(target>=arr[ind]){
        target-=arr[ind];
        ds.push_back(arr[i]);
        combo(ind+1,n,target,arr,ds)
        target+=arr[ind];
        ds,pop_back();
    }
    //not pick



}

using namespace std;

signed main()
{

    

    return 0;
}
