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

int mcd(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    if (y == 0)
    {
        return x;
    }
    int mi = min(x, y), ma = max(x, y);
    x = ma % mi;
    y = mi;
    return mcd(x, y);
};

int main()
{
    int n, x;
    int answer = 0;
    cin >> n >> x;
    while (--n)
    {
        int tmp;
        cin >> tmp;
        x = mcd(x, tmp);
    }
    for (int i = 1; i <= x; ++i)
    {
        if (x % i == 0)
        {
            ++answer;
        }
    }
    cout << answer << endl;
}