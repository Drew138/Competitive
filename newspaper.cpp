#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

void payment()
{
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i)
    {
        int tableLines;
        cin >> tableLines;
        unordered_map<char, int> centTable;
        int total = 0;
        for (int j = 0; j < tableLines; ++j)
        {
            char c;
            cin >> c;
            cin >> centTable[c];
        }
        int numArticles;
        cin >> numArticles;
        getchar();
        for (int k = 0; k < numArticles; ++k)
        {
            string art;
            getline(cin, art);
            for (int l = 0; l < art.size(); ++l)
            {
                total += centTable[art.at(l)];
            }
        }
        cout << (total / 100) << '.';
        cout << setw(2) << setfill('0') << (total % 100) << "$" << endl;
    }
}

int main()
{
    payment();
    return 0;
}