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
    int elementos, copy;
    cin >> elementos;
    copy = elementos;
    int arr[elementos];
    while (elementos)
    {
        cin >> arr[elementos - 1];
        elementos--;
    }

    for (int i = 0; i < copy; ++i)
    {
        if (i < copy - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl;
    }
}