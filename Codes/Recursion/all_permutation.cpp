#include<bits/stdc++.h>
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define msi map<string,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define li long int
#define lli long long int
#define endl "\n"
using namespace std;
vvi ans;
void all_permute(int ind,vi &ds,int n){
    if(ind==n){
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < n; i++)
    {
        swap(ds[i],ds[ind]);
        all_permute(ind+1,ds,n);
        swap(ds[ind],ds[i]);
    }
    
}

int main (){
    vi num={1,2,3,4};
    all_permute(0,num,4);

     for (auto v:ans){
        for(auto ele:v){
            cout<<ele<<" ";
        }
        cout<<endl;
     }
    return 0;
}
