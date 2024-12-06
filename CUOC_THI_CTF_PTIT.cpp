#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

void hhtuann()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 3)
    {
        cout << 2 << endl;
        return;
    }

    int f[100] = {1, 2, 3};

    for (int i = 3; i <= 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        if (f[i] > n)
        {
            cout << i - 1 << endl;
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