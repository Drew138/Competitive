#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define allgreater(v) v.begin(), v.end(), greater<int>()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

bool solve(vector<pair<int, int>> &squares, int index, int w, int h, int rw, int rh)
{
    if (index == 3)
        return w == h;
    int a = squares[index].first;
    int b = squares[index].second;
    if ((rw && rh) && ((a == rw && b == rh) || (b == rw && a == rh)))
    {
        return true;
    }
    bool call1 = false;
    bool call2 = false;
    bool call3 = false;
    bool call4 = false;
    if (b == w || h + a == b)
        call1 = solve(squares, index + 1, b, h + a, b - w, h);
    if (a == w || h + b == a)
        call2 = solve(squares, index + 1, a, h + b, a - w, h);
    if (b == h || w + a == b)
        call3 = solve(squares, index + 1, w + a, b, w, b - h);
    if (a == h || w + b == a)
        call3 = solve(squares, index + 1, w + b, a, w, a - h);
    return (call1 || call2 || call3 || call4);
}

int main()
{
    int i = 3, a, b;
    vector<pair<int, int>> squares;
    while (i--)
    {
        cin >> a >> b;
        squares.push_back(make_pair(a, b));
    }
    int x, y;
    x = squares[0].first;
    y = squares[1].second;
    string out = solve(squares, 1, x, y, 0, 0) ? "YES" : "NO";
    cout << out << endl;
}