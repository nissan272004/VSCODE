#include<bits/stdc++.h>
#define vi vector<int>
#define vs vector<string>
#define endl "\n"
using namespace std;
int main (){

     string s="dhffgfhd3b1bsgdlu",substring="3b1b";
     auto it=s.find(substring);
        //return position of strating index of substring
    if (it!=string::npos)
    {
      cout<<it-1;
    }
    

    return 0;
}
