#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

bool check(char a, char b, char c)
{
    int x = (a == 'x') + (b == 'x') + (c == 'x');
    int _x = (a == '.') + (b == '.') + (c == '.');
    return x == 2 && _x == 1;
}
void hhtuann()
{
    vector<string> a(4);
    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < 2 && check(a[i][j], a[i + 1][j], a[i + 2][j]))
            {
                cout << "yes" << endl;
                return;
            }
            if (j < 2 && check(a[i][j], a[i][j + 1], a[i][j + 2]))
            {
                cout << "yes" << endl;
                return;
            }
            if (i < 2 && j < 2 && check(a[i][j], a[i + 1][j + 1], a[i + 2][j + 2]))
            {
                cout << "yes" << endl;
                return;
            }
        }
    }

    cout << "no" << endl;

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