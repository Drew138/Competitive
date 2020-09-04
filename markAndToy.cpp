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

void maximumToys()
{

    int n, k, price, sum = 0, total = 0;
    cin >> n >> k;

    vector<int> prices;

    for (int i = 0; i < n; ++i)
    {
        cin >> price;
        prices.push_back(price);
    }

    sort(all(prices));

    for (int j = 0; j < prices.size(); ++j)
    {
        if (prices[j] + sum <= k)
        {
            sum += prices[j];
            total++;
        }
        else
        {
            break;
        }
    }
    cout << total;
}

int main()
{
    maximumToys();
}