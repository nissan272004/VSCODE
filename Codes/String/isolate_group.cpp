#include <bits/stdc++.h>
#define vi vector<int>
#define vs vector<string>
#define endl "\n"
using namespace std;
int main()
{
    string input="MY.NAME.IS.NISSAN";
    vector<string> seglist;
    string sub;
    stringstream test(input);

    while (getline(test, sub, '.'))
    {
        seglist.push_back(sub);
    }
    

    for(auto seg:seglist){
        cout<<seg<<endl;
    }
    return 0;
}
