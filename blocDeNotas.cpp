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
    int q, o, K, k;
    cin >> q;
    string output = "", w;
    stack<string> outputs;
    outputs.push("");
    while (q)
    {
        cin >> o;
        switch (o)
        {
        case 1:
            cin >> w;
            output.append(w);
            outputs.push(output);
            break;
        case 2:
            cin >> K;
            output = output.substr(0, output.length() - K);
            outputs.push(output);
            break;
        case 3:
            cin >> k;

            cout << output[k - 1] << endl;
            break;
        case 4:

            outputs.pop();
            output = outputs.top();
            break;
        }
        q--;
    }
}