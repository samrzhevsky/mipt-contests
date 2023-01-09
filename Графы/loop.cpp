#include <stdio.h>
#include <vector>

using namespace std;

vector<vector<int>> g;
vector<int> used, path;
int flag;

void dfs(int v)
{
    if (flag == 1)
        return;
    used[v] = 1;
    path.push_back(v);
    for (int i = 0; i < g[v].size(); i++)
    {
        int to = g[v][i];
        if (used[to] == 1)
        {
            path.push_back(to);
            flag = 1;
            return;
        }
        else
        {
            dfs(to);
            if (flag)
                return;
        }
    }
    used[v] = 2;
    path.pop_back();
}

int main()
{
    int n, m, a, b, i;
    scanf("%d %d", &n, &m);
    g.resize(n + 1);
    used.resize(n + 1, 0);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        g[a].push_back(b);
    }
    for (i = 1; i <= n; i++)
        if (used[i] == 0)
        {
            dfs(i);
            if (flag == 1)
                break;
        }
    if (flag == 1)
    {
        int to = path.back();
        i = path.size() - 2;
        while (path[i] != to)
            i--;
        printf("YES\n");
        for (; i < path.size() - 1; i++)
            printf("%d ", path[i]);
        printf("\n");
    }
    else
        printf("NO");
}