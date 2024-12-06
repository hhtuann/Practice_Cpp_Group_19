#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    vector<string> a(4);
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int cnt = (a[i][j] == '#') + (a[i + 1][j] == '#') + (a[i][j + 1] == '#') + (a[i + 1][j + 1] == '#');
            if (cnt == 0 || cnt == 4 || cnt == 1 || cnt == 3)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;

    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen("input.txt", "r"))
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }

    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */