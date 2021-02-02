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

int main()
{
    int t, lower, upper, i, j;
    cin >> t;
    while (t)
    {
        cin >> lower >> upper;
        i = sqrt(lower);
        j = sqrt(upper);
        int output = 0;
        for (int x = i; x <= j; x++)
        {
            if ((lower <= x * x) && (x * x <= upper))
            {
                output++;
            }
        }
        cout << output << endl;
        t--;
    }
}