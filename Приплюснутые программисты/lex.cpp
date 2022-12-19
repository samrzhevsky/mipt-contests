#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n, k = 0;
    bool f = false;
    string el;
    set<string> a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> el;
        transform(el.begin(), el.end(), el.begin(), ::tolower);
        a.insert(el);
    }

    for (auto i = a.rbegin(); i != a.rend(); ++i)
    {
        cout << *i << " ";
    }
}