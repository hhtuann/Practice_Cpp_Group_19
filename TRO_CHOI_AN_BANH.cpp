#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int N, K;
    string s;
    cin >> N >> K >> s;

    int t, g;
    for (int i = 0; i < N; i++)
    {
        if (s[i] == 'T')
            t = i;
        if (s[i] == 'G')
            g = i;
    }

    if (t < g)
    {
        for (int i = t; i <= g; i += K)
        {
            if (s[i] == '#')
            {
                cout << "NO" << endl;
                return;
            }
            if (s[i] == 'G')
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    else
    {
        for (int i = t; i >= g; i -= K)
        {
            if (s[i] == '#')
            {
                cout << "NO" << endl;
                return;
            }
            if (s[i] == 'G')
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

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
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */