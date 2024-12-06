#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

int daysOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int y)
{
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
        return 1; // la nam nhuan
    return 0;
}
int countDays(int y, int m, int d)
{
    int cnt = 0;
    for (int i = 1; i < y; i++)
        cnt += 365 + isLeapYear(i);

    for (int i = 1; i < m; i++)
        cnt += daysOfMonth[i] + (i == 2 && isLeapYear(y));

    return cnt + d;
}
void hhtuann()
{
    int y1, y2, m1, m2, d1, d2;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

    int count1 = countDays(y1, m1, d1);
    int count2 = countDays(y2, m2, d2);

    cout << abs(count1 - count2) << endl;

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