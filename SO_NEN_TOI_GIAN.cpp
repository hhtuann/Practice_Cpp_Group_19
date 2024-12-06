#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

int compress(int n)
{
    if (n < 10)
        return n;
    int _n = 0;
    while (n)
    {
        _n += (n % 10);
        n /= 10;
    }
    return compress(_n);
}
void hhtuann()
{
    int n;
    cin >> n;

    cout << compress(n) << endl;

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