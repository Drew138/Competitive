#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ld long double
#define ms(ar, val) memset(ar, val, sizeof ar)

using namespace std;

int main()
{
    int lenSteps;
    int height = 0;
    string path;
    int numValleys = 0;
    cin >> lenSteps >> path;
    for (int i = 0; i < lenSteps; ++i)
    {
        if ((height == 0) && (path.at(i) == 'D'))
        {
            ++numValleys;
        }
        height += path.at(i) == 'U';
        height -= path.at(i) == 'D';
    }
    cout << numValleys;
    // return 0;
}