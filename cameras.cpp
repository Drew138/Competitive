#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, r, window = 0, total = 0;
    cin >> n >> k >> r;
    vector<int> path(n, 0);

    while (k--)
    {
        int temp;
        cin >> temp;
        path[temp - 1] = 1;
    }

    for (int i = 0; i < r; i++)
    {
        window += path[i];
    }
    if (window == 0)
    {
        total += 2;
        path[r - 1] = 1;
        path[r - 2] = 1;
        window += 2;
    }
    else if (window < 2)
    {
        total += 1;
        if (path[r - 1])
            path[r - 2] = 1;
        else
            path[r - 1] = 1;
        window += 1;
    }

    int last = 0;

    for (int i = r; i < n; i++)
    {
        window -= path[last];
        window += path[i];
        last++;
        if (window == 0)
        {
            total += 2;
            path[r - 1] = 1;
            path[r - 2] = 1;
            window += 2;
        }
        else if (window < 2)
        {
            total += 1;
            if (path[i])
                path[i - 1] = 1;
            else
                path[i] = 1;
            window += 1;
        }
    }

    cout << total << endl;
}