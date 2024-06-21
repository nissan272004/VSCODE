#include <bits/stdc++.h>
#define vi vector<int>
#define vs vector<string>
#define endl "\n"
using namespace std;
void reverse_string(string &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start += 1;
        end -= 1;
    }
}
int main()
{

    string s = "BANGLADESH1971";
    reverse_string(s);
    cout<<s;
    return 0;
}
