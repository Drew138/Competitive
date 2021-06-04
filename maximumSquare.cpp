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
    int k, p;
    cin >> k;
    while (k)
    {
        cin >> p;
        int tmp;
        int arr[p];
        int answer = 0;
        for (int i = 0; i < p; ++i)
        {
            cin >> tmp;
            arr[i] = tmp;
        }
        sort(arr, arr + p);
        for (int i = p - 1; i >= 0; --i)
        {
            answer = max(answer, min(p - i, arr[i]));
        }
        cout << answer << endl;
        k--;
    }
}