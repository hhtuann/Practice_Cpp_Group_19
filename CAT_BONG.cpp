#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

bool diff(char a, char b, char c)
{
    return a != b && b != c && a != c;
}
void hhtuann()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n == 3)
    {
        cout << 0 << endl;
        return;
    }

    if (diff(s[0], s[1], s[2]) || diff(s[n - 3], s[n - 2], s[n - 1]))
    {
        cout << 1 << endl;
        return;
    }

    if (diff(s[0], s[1], s[n - 1]) || diff(s[0], s[n - 2], s[n - 1]))
    {
        cout << 2 << endl;
        return;
    }

    for (int i = 1; i < n - 3; i++)
    {
        if (diff(s[i], s[i + 1], s[i + 2]))
        {
            cout << 2 << endl;
            return;
        }
    }

    for (int i = 1; i < n - 2; i++)
    {
        if (diff(s[0], s[i], s[i + 1]) || diff(s[n - 1], s[i], s[i + 1]))
        {
            cout << 3 << endl;
            return;
        }
    }

    cout << 4 << endl;

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