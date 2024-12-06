#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int w, h, n;
    cin >> w >> h >> n;

    int _w = 1, _h = 1;
    while (w % 2 == 0)
    {
        w /= 2;
        _w *= 2;
    }
    while (h % 2 == 0)
    {
        h /= 2;
        _h *= 2;
    }

    if (_w * _h >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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
    cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */