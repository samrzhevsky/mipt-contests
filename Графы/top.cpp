#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
bool used[100000];
char color[100000];
vector<int> g[100000];
vector<int> answ;

void dfs(int v)
{
    used[v] = true;

    for (int i = 0; i < g[v].size(); i++)
        if (!used[g[v][i]])
            dfs(g[v][i]);

    answ.push_back(v);
}

bool dfsForCycle(int v)
{
    color[v] = 'g';

    for (int i = 0; i < g[v].size(); i++)
        if ((color[g[v][i]] == 'w' && dfsForCycle(g[v][i])) || color[g[v][i]] == 'g')
            return true;

    color[v] = 'b';

    return false;
}

int main()
{
    int start, end;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> start >> end;
        start--;
        end--;
        g[start].push_back(end);
    }

    for (int i = 0; i < n; i++)
        color[i] = 'w';

    bool hasCycle = false;
    for (int i = 0; i < n; i++)
    {
        hasCycle = dfsForCycle(i);
        if (hasCycle)
        {
            cout << "-1";
            return 0;
        }
    }

    if (!hasCycle)
    {
        for (int i = 0; i < n; i++)
            used[i] = false;

        for (int i = 0; i < n; i++)
            if (!used[i])
                dfs(i);

        reverse(answ.begin(), answ.end());
        for (int i = 0; i < answ.size(); i++)
            cout << answ[i] + 1 << " ";
    }

    return 0;
}