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
    int n, k, el, answer = 0;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; ++i)
    {
        cin >> el;
        q.push(el);
    }
    int one, two;
    while (q.top() < k && q.size() >= 2)
    {
        one = q.top();
        q.pop();
        two = q.top();
        q.pop();
        q.push(one + (2 * two));
        answer++;
    }
    if (answer > k || q.top() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << answer << endl;
    }
}