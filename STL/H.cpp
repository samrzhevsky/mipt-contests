#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

#define MAX 2010
#define INF 0x3F3F3F3F

using namespace std;

struct edge
{
    int node, dist;
    edge(int node, int dist) : node(node), dist(dist) {}
};

int used[MAX], dist[MAX], parent[MAX];
priority_queue<edge> pq;

bool operator<(edge a, edge b)
{
    return a.dist > b.dist;
}

void Relax(int v, int to, int cost)
{
    if (dist[to] > dist[v] + cost)
    {
        dist[to] = dist[v] + cost;
        pq.push(edge(to, dist[to]));
        parent[to] = v;
    }
}

int main()
{
    int i, j, v, d, to, cost, n, m, b, e, w;
    vector<vector<edge>> g;

    cin >> n >> m;
    g.resize(n + 1);

    for (i = 0; i < m; i++)
    {
        w = 1;
        cin >> b >> e;
        g[b].push_back(edge(e, w));
        g[e].push_back(edge(b, w));
    }

    memset(dist, 0x3F, sizeof(dist));
    dist[0] = 0;
    memset(parent, -1, sizeof(parent));
    memset(used, 0, sizeof(used));
    pq.push(edge(0, 0));

    while (!pq.empty())
    {
        edge e = pq.top();
        pq.pop();
        v = e.node;

        if (e.dist > dist[v])
            continue;
        for (j = 0; j < g[v].size(); j++)
        {
            to = g[v][j].node;
            cost = g[v][j].dist;
            if (!used[to])
                Relax(v, to, cost);
        }

        used[v] = 1;
    }

    for (int k = 0; k < n; k++)
    {
        cout << dist[k] << endl;
    }

    return 0;
}