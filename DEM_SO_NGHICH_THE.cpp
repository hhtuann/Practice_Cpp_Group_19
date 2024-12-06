#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

const int MAXN = 1e5 + 5;

class FenwickTree
{
public:
    FenwickTree(int n) : n(n), bit(n + 1) {}
    void update(int idx, int val)
    {
        for (int i = idx; i <= n; i += i & -i)
            bit[i] += val;
    }
    int get(int idx)
    {
        int res = 0;
        for (int i = idx; i > 0; i -= i & -i)
            res += bit[i];
        return res;
    }

private:
    vector<int> bit;
    int n;
};
void hhtuann()
{
    int n;
    cin >> n;

    vector<int> a(n), compress(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        compress[i] = a[i];
    }

    sort(compress.begin(), compress.end());
    for (int i = 0; i < n; i++)
        a[i] = lower_bound(compress.begin(), compress.end(), a[i]) - compress.begin() + 1;

    vector<int> dp(n, 1);
    for (int l = 2; l <= 3; l++)
    {
        FenwickTree BIT(MAXN);
        for (int i = n - 1; i >= 0; i--)
        {
            BIT.update(a[i], dp[i]);
            dp[i] = BIT.get(a[i] - 1);
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++)
        res += dp[i];

    cout << res << endl;

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