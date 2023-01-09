#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int **d = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        d[i] = new int[n];
        for (int j = 0; j < n; ++j)
        {
            d[i][j] = 0;
        }
    }
    int *d1 = new int[n];
    d1[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        d1[i] = 0;
    }
    int *d2 = new int[n];
    d2[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        d2[i] = 0;
    }
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        d[a][b] = 1;
        d[b][a] = 1;
    }
    int ud = n;
    while (ud > 0)
    {
        int t = 1;
        while (t)
        {
            t = 0;
            for (int i = 0; i < n; ++i)
            {
                if (d2[i] == 1)
                {
                    d2[i] = 2;
                    t = 1;
                    ud--;
                    for (int j = 0; j < n; ++j)
                    {
                        if (i == j || d[i][j] == 0)
                            continue;
                        if (d1[i] == d1[j])
                        {
                            cout << "NO";
                            return 0;
                        }
                        d1[j] = 3 - d1[i];
                        if (d2[j] == 0)
                            d2[j] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (d2[i] == 0)
            {
                d1[i] = 1;
                d2[i] = 1;
                break;
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; ++i)
    {
        if (d1[i] == 1)
        {
            cout << i << ' ';
        }
    }

    delete[] d;
    delete[] d1;
    delete[] d2;

    return 0;
}
