#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int N;
    cin >> N;

    map<int, int> mp;
    int maxFreq = 0;

    for (int i = 0, x; i < N; i++)
    {
        cin >> x;
        mp[x]++;
        maxFreq = max(maxFreq, mp[x]);
    }

    for (auto [x, y] : mp)
    {
        if (y == maxFreq)
        {
            cout << x << endl;
            return;
        }
    }

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