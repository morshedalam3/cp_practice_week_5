#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        vector<int> v, ans;
        int take = 1;
        int ok = 0;
        for (int i = 0; i < k; ++i)
        {
            take += ok;
            v.push_back(take);
            ++ok;
        }
        int have = k;
        for (int i = 0; i < k; ++i)
        {
            if (v[i] < n and n - v[i] >= have or n-v[i] == have - 1)
            {
                ans.push_back(v[i]);
                --have;
            }
        }

        while (have--)
        {
            if (ans.size() == 0)
            {
                ans.push_back(1);
                continue;
            }
            ans.push_back(ans.back() + 1);
        }

        for (auto itr : ans)
            cout << itr << " ";
        cout << endl;
    }
    return 0;
}