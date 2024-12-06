#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

const int MAXN = 1e7 + 5;

vector<int> a(MAXN);

void hhtuann()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cin >> a[i];

    sort(a.begin() + 1, a.begin() + N + 1);
    for (int i = 1; i <= N; i++)
    {
        if (i != a[i])
        {
            cout << i << endl;
            return;
        }
    }

    cout << N + 1 << endl;

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