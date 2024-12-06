#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

int binpow(int n, int k)
{
    int res = 1;
    while (k)
    {
        if (k & 1)
            res = res * n;
        n = n * n;
        k /= 2;
    }
    return res;
}
int sumDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void hhtuann()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> ans;
    for (int i = 0; i <= 81; i++)
    {
        int x = b * binpow(i, a) + c;
        if (sumDigits(x) == i && x < 1e9)
            ans.push_back(x);
    }

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << ' ';

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