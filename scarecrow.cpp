#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    int totIters, num, cases;
    string str;
    cin >> totIters;
    cases = totIters;
    while (totIters--)
    {
        int totalScarec = 0;
        cin >> num >> str;
        for (int i = 0; i < num; ++i)
        {
            if (str.at(i) == '.')
            {
                totalScarec++;
                i += 2;
            }
        }
        cout << "Case " << (cases - totIters) << ": " << totalScarec << "\n";
    }
}