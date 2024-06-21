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
int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        bool is_same = true;
        int n, sum = 0;
        cin >> n;
        vi nums(n), sums;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];

            if (nums[0] != nums[i] && i > 0 && is_same)
            {
                is_same = false;
            }
        }
        if (is_same)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i > 0 && sum == nums[i])
                {
                    int nx = i;
                    while (nums[i] == nums[nx])
                    {
                        nx++;
                    }
                    swap(nums[i], nums[nx]);
                }
                sum += nums[i];
            }

            cout << "YES" << endl;
            for (auto a : nums)
            {
                cout << a << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
