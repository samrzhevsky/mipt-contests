#include <cstdio>
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

int i, j, v, d, to, cost, n, m, s, f, b, e, w;
int used[MAX], dist[MAX], parent[MAX];
vector<vector<edge>> g;
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

void path(int v)
{
    if (v == -1)
        return;
    path(parent[v]);
    if (parent[v] != -1)
        printf(" ");
    printf("%d", v);
}

int main()
{
    scanf("%d%d", &n, &m);
    scanf("%d%d", &s, &f);
    g.resize(n + 1);

    for (i = 0; i < m; i++)
    {
        scanf("%d%d%d", &b, &e, &w);
        g[b].push_back(edge(e, w));
        g[e].push_back(edge(b, w));
    }

    memset(dist, 0x3F, sizeof(dist));
    dist[s] = 0;
    memset(parent, -1, sizeof(parent));
    memset(used, 0, sizeof(used));
    pq.push(edge(s, 0));

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

    if (dist[f] == INF)
        printf("-1\n");
    else
    {
        path(f);
        printf("\n");
    }

    return 0;
}