#include <bits/stdc++.h>
using namespace std;

#define NAME "Hoang Hoang Tuan"
#define endl '\n'
#define LL long long

void hhtuann()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<char> MIN(n + 1, 'z' + 1);

    for (int i = n - 1; i >= 0; i--)
        MIN[i] = min(s[i], MIN[i + 1]);

    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        st.push(s[i]);
        while (!st.empty() && st.top() <= MIN[i + 1])
        {
            cout << st.top();
            st.pop();
        }
    }

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