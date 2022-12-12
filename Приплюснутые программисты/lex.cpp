#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n, k = 0;
    bool f = false;

    cin >> n;

    string el;
    string *a = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> el;
        transform(el.begin(), el.end(), el.begin(), ::tolower);

        for (int j = 0; j < n; j++)
        {
            if (a[j] == el)
            {
                f = true;
                break;
            }
        }

        if (!f)
        {
            a[i] = el;
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (a[j] < a[j + 1])
            {
                string t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == "")
            continue;

        cout << a[i] << " ";
    }

    delete[] a;
}