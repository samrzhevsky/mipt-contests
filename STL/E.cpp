#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

struct Edge
{
    long from;
    long to;
    long len;
};

std::istream &operator>>(std::istream &in, Edge &edge)
{
    in >> edge.from >> edge.to >> edge.len;
    return in;
}

struct Vertex
{
    long from_count;
    long from_sum;
};

std::ostream &operator<<(std::ostream &out, const Vertex &vert)
{
    out << vert.from_count << ' ' << vert.from_sum;
    return out;
}

int main()
{
    long n;
    std::cin >> n;

    std::vector<Edge> edges;
    edges.reserve(n);

    long max_vert_idx = -1;

    for (long i = 0; i < n; ++i)
    {
        Edge edge;
        std::cin >> edge;
        max_vert_idx = std::max(max_vert_idx, edge.from);
        max_vert_idx = std::max(max_vert_idx, edge.to);
        edges.push_back(std::move(edge));
    }

    std::vector<Vertex> verts(max_vert_idx + 1, {0, 0});
    for (const auto &edge : edges)
    {
        auto &vert = verts[edge.from];
        ++vert.from_count;
        vert.from_sum += edge.len;
    }

    for (long i = 0; i <= max_vert_idx; ++i)
        std::cout << i << ' ' << verts[i] << std::endl;

    return 0;
}