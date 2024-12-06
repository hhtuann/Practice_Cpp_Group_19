#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] -= i;
    }

    priority_queue<int> pq;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
        if (pq.top() > a[i])
        {
            ans += pq.top() - a[i];
            pq.pop();
            pq.push(a[i]);
        }
    }

    cout << ans << endl;

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