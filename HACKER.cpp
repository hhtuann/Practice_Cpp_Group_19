#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int MAXN = 1e3 + 5;

int C[MAXN][MAXN]; // C[k][n]

void perpare()
{
    for (int i = 0; i < MAXN; i++)
        C[0][i] = C[i][i] = 1;
    for (int n = 2; n < MAXN; n++)
        for (int k = 1; k < n; k++)
            C[k][n] = (C[k - 1][n - 1] + C[k][n - 1]) % MOD;
}
void hhtuann()
{
    int K, N;
    cin >> K >> N;

    for (int i = 1, x; i <= K; i++)
    {
        cin >> x;
        N -= x;
    }

    if (N < 0)
        cout << 0 << endl;
    else
        cout << C[N][N + K - 1] << endl;

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

    perpare();
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
        hhtuann();

    return 0;
}
/* Take Off Toward Your Dream ! */