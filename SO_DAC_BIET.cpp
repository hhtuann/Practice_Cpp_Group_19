#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    double C;
    cin >> C;

    double res = 0;
    for (int i = 0; 1.0 / (2 * i + 1) > C; i++)
    {
        res += (i & 1 ? -1.0 : 1.0) / (2 * i + 1);
    }

    cout << fixed << setprecision(6) << 4 * res << endl;
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