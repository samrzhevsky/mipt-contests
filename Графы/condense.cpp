#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<vector<int>> g, gr;
vector<int> used, top, color;
set<pair<int, int>> s;

void dfs1(int v)
{
    used[v] = 1;
    for (unsigned i = 0; i < g[v].size(); i++)
    {
        int to = g[v][i];
        if (!used[to])
            dfs1(to);
    }
    top.push_back(v);
}

void dfs2(int v, int c)
{
    color[v] = c;
    for (unsigned i = 0; i < gr[v].size(); i++)
    {
        int to = gr[v][i];
        if (color[to] == -1)
            dfs2(to, c);
    }
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    g.resize(n + 1);
    gr.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a;
        int b;
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a);
    }
    used.resize(n + 1);
    for (int i = 1; i <= n; i++)
        if (!used[i])
            dfs1(i);
    color.assign(n + 1, -1);
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        int v = top[n - i];
        if (color[v] == -1)
            dfs2(v, c++);
    }
    for (unsigned i = 1; i < g.size(); i++)
        for (unsigned j = 0; j < g[i].size(); j++)
        {
            int to = g[i][j];
            if (color[i] != color[to])
                s.insert(make_pair(color[i], color[to]));
        }
    cout << s.size();
}