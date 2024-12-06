#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

class Matrix
{
public:
    int X[2][2];
    Matrix()
    {
        memset(X, 0, sizeof(X));
    }
    Matrix(vector<vector<int>> values)
    {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                X[i][j] = values[i][j];
    }
    friend Matrix operator*(Matrix a, Matrix b)
    {
        Matrix c;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                c.X[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    c.X[i][j] += a.X[i][k] * b.X[k][j];
                    c.X[i][j] %= MOD;
                }
            }
        }
        return c;
    }
    Matrix binpow(Matrix a, int n)
    {
        if (n == 1)
            return a;
        Matrix tmp = binpow(a, n / 2);
        if (n & 1)
            return tmp * tmp * a;
        else
            return tmp * tmp;
    }
};
void hhtuann()
{
    int n;
    cin >> n;

    Matrix a({{1, 1},
              {1, 0}});

    a = a.binpow(a, n);
    cout << a.X[0][1] << endl;

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