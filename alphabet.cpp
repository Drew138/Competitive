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
    string word;
    cin >> word;
    vector<vector<int>> dp(word.length(), vector<int>(1));
    int answer = 1;

    for (int i = 0; i < dp.size(); ++i)
    {
        for (int j = 0; j < dp[i].size(); ++j)
        {
        }
    }
    for (int i = 1; i < word.length(); ++i)
    {
        if (word[i] - word[i - 1] > 0)
        {

            dp[i] = dp[i] + dp[i - 1];
            answer = max(answer, dp[i]);
        }
    }
    cout << 26 - answer << endl;
}