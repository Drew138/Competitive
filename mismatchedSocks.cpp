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
    long long n, k;
    cin >> n;
    priority_queue<long long> dp;
    long long i = 0, j = n - 1;
    long long answer = 0;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        dp.push(tmp);
    }
    while (dp.size() > 1)
    {
        long long first = dp.top();
        dp.pop();
        long long second = dp.top();
        dp.pop();
        long long r = first - second;
        answer += second;
        dp.push(r);
    }
    cout << answer << endl;
}