#include <iostream>
#include <vector>
#include <boost/config.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/boyer_myrvold_planar_test.hpp>

using namespace std;
using namespace boost;

int main()
{
    int n, m, a, b;
    cin >> n >> m;

    adjacency_list<vecS, vecS, undirectedS> g(n);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        add_edge(a, b, g);
    }

    vector<vector<graph_traits<adjacency_list<vecS, vecS, undirectedS>>::edge_descriptor>> embedding(num_vertices(g));
    if (boyer_myrvold_planarity_test(boyer_myrvold_params::graph = g, boyer_myrvold_params::embedding = &embedding[0]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}