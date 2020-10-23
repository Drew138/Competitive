#include <bits/stdc++.h>

#define D(x) cout << #x << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(x, n) for (int i = x; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define allgreater(v) v.begin(), v.end(), greater<int>()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

void bfs(vector<vector<int>> &v, vector<int> &s)
{
    s[0] = 0;
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        forn(0, v[cur].size())
        {
            int next = v[cur][i];

            if (s[next] == -1)
            {
                q.push(next);
                s[next] = s[cur] + 1;
            }
            else if (s[next] < s[cur] + 1)
            {
                q.push(next);
                s[next] = min(s[next], s[cur] + 1);
            }
        }
    }

    forn(0, 30)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> v;
        vector<int> s(30, -1);

        //Casilla 1
        vector<int> h;
        for (int x = 1; x < 7; ++x)
        {
            h.push_back(x);
        }
        v.push_back(h);

        //2 a 28
        forn(1, 29)
        {
            vector<int> xd;
            if ((i + 6) > 29)
                xd.push_back(29);
            else
                xd.push_back(i + 6);
            v.push_back(xd);
        }

        //Casilla 29
        vector<int> xd;
        v.push_back(xd);

        int n;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            v[(a - 1)].push_back((b - 1));
        }
        bfs(v, s);
    }
}