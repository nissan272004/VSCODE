#include <bits/stdc++.h>

//mis
#define li long 
#define int long long
#define endl "\n"
const int MOD=1e9+8;
#define loop(i,f,l,k) for(int i=f;i<l;i+=k)
#define loopin(i,f,l,k) for(int i=f;i<=l;i+=k)
#define revloopin(i,f,l,k) for(int i=f;i>=l;i-=k)
#define revloop(i,f,l,k) for(int i=f;i>l;i-=k)

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

using namespace std;

vvi ans;
void all_subseq(int ind,int n, vi arr,vi &ds){
    if(ind== n){
        ans.push_back(ds);
        return;
    }
    //pick
        ds.push_back(arr[ind]);
        all_subseq(ind+1,n,arr,ds);
        ds.pop_back();

    //not-pick
        all_subseq(ind+1,n,arr,ds);

}
signed main()
{

    vi v={1,2,4};
    vi ds;
    all_subseq(0,3,v,ds);
    for(auto vec:ans){
            for(auto ele:vec){
                cout<<ele<<" ";
            }
        cout<<endl;
    }
    return 0;
}
