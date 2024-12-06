#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

void hhtuann()
{
    int N;
    cin >> N;

    if (N % 3 == 0)
    {
        cout << N / 3 << ' ' << N / 3 << ' ' << N / 3 << endl;
        return;
    }

    if (N % 4 == 0)
    {
        cout << N / 2 << ' ' << N / 4 << ' ' << N / 4 << endl;
        return;
    }

    cout << "IMPOSSIBLE" << endl;

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