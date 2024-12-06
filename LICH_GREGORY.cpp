#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

bool isLeapYear(int y)
{
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
        return 1; // la nam nhuan
    return 0;
}
int daysOfMonth(int y, int m)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    else
        return 28 + isLeapYear(y);
}
bool cmp(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 != y2)
        return y1 < y2;
    if (m1 != m2)
        return m1 < m2;
    return d1 < d2;
}
void hhtuann()
{
    int y1, y2, m1, m2, d1, d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    if (cmp(d1, m1, y1, d2, m2, y2) == 0)
    {
        swap(y1, y2);
        swap(m1, m2);
        swap(d1, d2);
    }

    int days = 0;

    if (y1 != y2)
    {
        for (int i = y1 + 1; i <= y2 - 1; i++)
            days += 365 + isLeapYear(i);

        for (int i = m1 + 1; i <= 12; i++)
            days += daysOfMonth(y1, i);

        for (int i = 1; i <= m2 - 1; i++)
            days += daysOfMonth(y2, i);

        days += daysOfMonth(y1, m1) - d1 + d2;
    }
    else
    {
        if (m1 != m2)
        {
            for (int i = m1 + 1; i < m2; i++)
                days += daysOfMonth(y1, i);

            days += daysOfMonth(y1, m1) - d1 + d2;
        }
        else
            days = d2 - d1;
    }

    cout << days << endl;

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