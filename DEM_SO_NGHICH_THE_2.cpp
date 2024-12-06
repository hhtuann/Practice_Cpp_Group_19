#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long
#define fi first
#define se second

const int MAXN = 4e5 + 5;

int N;
map<int, int> mp;

class FenwickTree
{
public:
    FenwickTree(int n) : bit(n + 1, 0), n(n) {}
    void update(int idx, int val)
    {
        for (int i = idx; i <= n; i += i & -i)
            bit[i] += val;
    }
    int getSum(int idx)
    {
        int sum = 0;
        for (int i = idx; i > 0; i -= i & -i)
            sum += bit[i];
        return sum;
    }

private:
    vector<int> bit;
    int n;
};
void swap(int x, int y)
{
    int tmp = mp.count(x) ? mp[x] : x;
    mp[x] = mp.count(y) ? mp[y] : y;
    mp[y] = tmp;
}
void hhtuann()
{
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        int x, y;
        cin >> x >> y;
        swap(x, y);
    }

    vector<pair<int, int>> new_mp;
    new_mp.emplace_back(0, 0);
    for (auto x : mp)
        new_mp.emplace_back(x.fi, x.se);

    vector<pair<int, int>> a;
    vector<int> a_sort;
    for (int i = 1; i < new_mp.size(); i++)
    {
        if (new_mp[i].fi - new_mp[i - 1].fi > 1)
        {
            a_sort.emplace_back(new_mp[i - 1].fi + 1);
            a.emplace_back(new_mp[i - 1].fi + 1, new_mp[i].fi - new_mp[i - 1].fi - 1);
        }
        a_sort.emplace_back(new_mp[i].se);
        a.emplace_back(new_mp[i].se, 1);
    }

    sort(a_sort.begin(), a_sort.end());

    vector<pair<int, int>> new_a;
    for (auto x : a)
    {
        int pos = lower_bound(a_sort.begin(), a_sort.end(), x.fi) - a_sort.begin();
        new_a.emplace_back(pos + 1, x.se);
    }

    N = new_a.size();
    FenwickTree BIT(MAXN);
    int ans = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        ans += new_a[i].se * BIT.getSum(new_a[i].fi - 1);
        BIT.update(new_a[i].fi, new_a[i].se);
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