#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define D(x) cout << #x << " " << x << endl

int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};

int dfs(int x, int y, vvi &g, vvb &visited, int n, int m)
{
    visited[x][y] = true;
    int child = 1;
    for (int i = 0; i < 8; ++i)
    {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m)
            continue;
        if (visited[nextX][nextY])
            continue;
        if (g[nextX][nextY] == 0)
            continue;
        child += dfs(nextX, nextY, g, visited, n, m);
    }
    return child;
}

int solve(vvi g, int n, int m)
{
    int maxi = 0;
    vvb visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (g[i][j] == 1 && !visited[i][j])
                maxi = max(dfs(i, j, g, visited, n, m), maxi);
        }
    }
    return maxi;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vvi g(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cin >> g[i][j];
    }
    cout << solve(g, n, m) << endl;
    return 0;
}