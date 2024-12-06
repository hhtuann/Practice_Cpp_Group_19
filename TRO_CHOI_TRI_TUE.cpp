#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

const int MOD = 1e9 + 9;

int binpow(int n, int k)
{
    int res = 1;
    while (k)
    {
        if (k & 1)
            res = res * n % MOD;
        n = n * n % MOD;
        k /= 2;
    }
    return res;
}
void hhtuann()
{
    int N, M, K;
    cin >> N >> M >> K;

    int correct = N / K * (K - 1) + N % K;

    if (correct >= M)
    {
        cout << M;
        return;
    }

    int cnt = M - correct;

    int res = K * (binpow(2, cnt + 1) - 2) % MOD + M - cnt * K % MOD;
    cout << (res + MOD) % MOD << endl;

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