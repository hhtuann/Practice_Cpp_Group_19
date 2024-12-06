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
    vector<int> a(MAXN);
    for (int i = 1; i < MAXN; i++)
        a[i] = i;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        swap(a[x], a[y]);
    }

    FenwickTree BIT(MAXN);
    int res = 0;

    for (int i = MAXN - 1; i > 0; i--)
    {
        BIT.update(a[i], 1);
        res += BIT.get(a[i] - 1);
    }

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