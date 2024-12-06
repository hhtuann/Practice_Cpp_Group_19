#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int N;
    cin >> N;

    vector<int> a(N);

    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());

    if (a.size() > 3 || (a.size() == 3 && a[1] - a[0] != a[2] - a[1]))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

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