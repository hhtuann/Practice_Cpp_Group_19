#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

const int MAXN = 1e3 + 5;
vector<int> prime, divisors;
int N, P = LLONG_MAX;
int id[MAXN] = {0};

void prepare()
{
    vector<bool> is_prime(MAXN, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MAXN; i++)
        if (is_prime[i])
            prime.push_back(i);
}
void Try(int n, int remainder)
{
    if (remainder == 1)
    {
        int sz = n - 1, ans = 1;
        for (int i = 1; i < n; i++)
            ans *= pow(prime[sz - i], divisors[id[i]] - 1);

        if (ans > 0 && ans < P)
            P = ans;

        return;
    }

    for (int i = id[n - 1]; i < divisors.size(); i++)
    {
        if (remainder % divisors[i] == 0)
        {
            id[n] = i;
            Try(n + 1, remainder / divisors[i]);
        }
    }
}
void solve()
{
    cin >> N;

    for (int i = 2; i <= 62; i++)
        if (N % i == 0)
            divisors.push_back(i);

    Try(1, N);

    cout << P << endl;

    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    prepare();
    int testcase = 1;
    // cin >> testcase;
    while (testcase--)
        solve();

    return 0;
}
/* Take Off Toward Your Dream ! */