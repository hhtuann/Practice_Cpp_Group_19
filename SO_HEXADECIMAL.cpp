#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

bool isVirus(int n)
{
    while (n)
    {
        if (n % 10 != 0 && n % 10 != 1)
            return false;
        n /= 10;
    }
    return true;
}
void hhtuann()
{
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i++)
        ans += isVirus(i);

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