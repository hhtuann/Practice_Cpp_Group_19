#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int N, K;
    cin >> N >> K;

    vector<int> prefix(N + 1, 0);

    for (int i = 1, x; i <= N; i++)
    {
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int pos = upper_bound(prefix.begin(), prefix.end(), prefix[i] + K) - prefix.begin();
        ans = max(ans, pos - i - 1);
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