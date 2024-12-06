#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

int rubik[25];

bool isPerfect(int a[])
{
    for (int i = 1; i <= 24; i += 4)
        for (int j = i; j < i + 4; j++)
            if (a[j] != a[i])
                return false;
    return true;
}
bool Rotate(int matrix[4][4])
{
    int left[25], right[25], rotated[4][4];
    for (int i = 1; i <= 24; i++)
    {
        left[i] = rubik[i];
        right[i] = rubik[i];
    }

    // Rotate left
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            rotated[4 - j - 1][i] = matrix[i][j];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            left[matrix[i][j]] = rubik[rotated[i][j]];

    // Rotate right
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            rotated[j][4 - i - 1] = matrix[i][j];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            right[matrix[i][j]] = rubik[rotated[i][j]];

    return isPerfect(right) || isPerfect(left);
}

bool U()
{
    int m[4][4] = {
        {0, 22, 21, 0},
        {13, 1, 2, 18},
        {14, 3, 4, 17},
        {0, 5, 6, 0}};
    return Rotate(m);
}
bool F()
{
    int m[4][4] = {
        {0, 3, 4, 0},
        {14, 5, 6, 17},
        {16, 7, 8, 19},
        {0, 9, 10, 0}};
    return Rotate(m);
}
bool R()
{
    int m[4][4] = {
        {0, 4, 2, 0},
        {6, 17, 18, 21},
        {8, 19, 20, 23},
        {0, 10, 12, 0}};
    return Rotate(m);
}
bool L()
{
    int m[4][4] = {
        {0, 1, 3, 0},
        {22, 13, 14, 5},
        {24, 15, 16, 7},
        {0, 11, 9, 0}};
    return Rotate(m);
}
bool B()
{
    int m[4][4] = {
        {0, 2, 1, 0},
        {18, 21, 22, 13},
        {20, 23, 24, 15},
        {0, 12, 11, 0}};
    return Rotate(m);
}
bool D()
{
    int m[4][4] = {
        {0, 7, 8, 0},
        {16, 9, 10, 19},
        {15, 11, 12, 20},
        {0, 24, 23, 0}};
    return Rotate(m);
}
void hhtuann()
{
    for (int i = 1; i <= 24; i++)
        cin >> rubik[i];

    if (U() || F() || R() || L() || B() || D())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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