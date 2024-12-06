#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
        {
            ans++;
            i += 2;
        }
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