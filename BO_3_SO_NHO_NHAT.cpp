#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);
    map<int, int> mp;
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    sort(a.begin(), a.end());

    if (a[0] == a[2])
    {
        cout << mp[a[0]] * (mp[a[0]] - 1) * (mp[a[0]] - 2) / 6 << endl;
        return;
    }

    cout << mp[a[2]] << endl;

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