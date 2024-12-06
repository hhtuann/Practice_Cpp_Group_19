#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
void hhtuann()
{
    int r, n;
    cin >> r >> n;

    vector<pair<int, int>> a(n);
    double C = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        if (i)
            C += distance(a[i].first, a[i].second, a[i - 1].first, a[i - 1].second);
    }
    C += distance(a[0].first, a[0].second, a[n - 1].first, a[n - 1].second);

    double f = (C - 2 * M_PI * r) / C;

    if (f < 0)
        cout << "Not possible" << endl;
    else
        cout << fixed << setprecision(6) << f << endl;

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