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
    int numContests, numAllowedLoss, luck, importance, totalLuck = 0;
    cin >> numContests >> numAllowedLoss;
    vector<int> impContests;
    for (int x = 0; x < numContests; ++x)
    {
        cin >> luck >> importance;
        if (importance)
        {
            impContests.push_back(luck);
        }
        else
        {
            totalLuck += luck;
        }
    }
    sort(all(impContests), greater<int>());
    for (int i = 0; i < impContests.size(); ++i)
    {
        if (i < numAllowedLoss)
        {
            totalLuck += impContests[i];
        }
        else
        {
            totalLuck -= impContests[i];
        }
    }
    cout << totalLuck;
}