#include <algorithm>
#include <iostream>
#include <set>
#include <list>

using TIslandSet = std::set<long>;
using TIslandSetList = std::list<TIslandSet>;
using TIslandSetListIt = TIslandSetList::iterator;

TIslandSetList ssi;

TIslandSetListIt find_island_set(long island)
{
    return std::find_if(ssi.begin(), ssi.end(),
                        [&island](const TIslandSetList::value_type &si)
                        { return si.find(island) != si.end(); });
}

void merge_island_sets(TIslandSetListIt it1, TIslandSetListIt it2)
{
    auto &is1 = *it1;
    auto &is2 = *it2;
    is1.insert(is2.begin(), is2.end());
    ssi.erase(it2);
}

int main()
{
    long n, m;
    std::cin >> n >> m;

    long min_bridge_count = -1;
    for (long i = 0; i < m; ++i)
    {
        long from, to;
        std::cin >> from >> to;

        if (min_bridge_count > 0)
            continue;

        const auto from_set_it = find_island_set(from);
        const auto to_set_it = find_island_set(to);

        if (from_set_it == ssi.end() && to_set_it == ssi.end())
        {
            ssi.push_back(TIslandSet{from, to});
            n -= 2;
        }
        else if (from_set_it == ssi.end() || to_set_it == ssi.end())
        {
            if (from_set_it != ssi.end())
                (*from_set_it).insert(to);
            else
                (*to_set_it).insert(from);

            --n;
        }
        else if (from_set_it != to_set_it)
        {
            merge_island_sets(from_set_it, to_set_it);
        }

        if (n == 0 && ssi.size() == 1)
            min_bridge_count = i + 1;
    }

    std::cout << min_bridge_count << std::endl;

    return 0;
}