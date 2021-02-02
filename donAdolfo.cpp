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

int getSum(int x, int y, int (&matrix)[6][6])
{
    return matrix[x - 1][y - 1] + matrix[x - 1][y] + matrix[x - 1][y + 1] + matrix[x][y] + matrix[x + 1][y - 1] + matrix[x + 1][y] + matrix[x + 1][y + 1];
}

int main()
{
    int matrix[6][6];
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int maxSum = -64;
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
        {
            maxSum = max(getSum(i, j, matrix), maxSum);
        }
    }
    cout << maxSum;
}