#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

int calc(int n)
{
    if (n < 10)
        return 1;
    int _n = 0;
    while (n)
    {
        _n += n % 10;
        n /= 10;
    }
    return calc(_n) + 1;
}
void hhtuann()
{
    string n;
    cin >> n;

    if (n == "0")
    {
        cout << 0;
        return;
    }

    int _n = 0;
    for (char c : n)
        _n += c - '0';

    cout << calc(_n) << endl;

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