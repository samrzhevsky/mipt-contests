#include <iostream>
#include <string>
#define ull unsigned long long int
#define MAX 18446744073709551615

using namespace std;

int r;
int main()
{
	int n;
	int m;
	cin >> n >> m;
	ull **d = new ull *[n];
	for (int i = 0; i < n; ++i)
	{
		d[i] = new ull[n];
		for (int j = 0; j < n; ++j)
		{
			d[i][j] = MAX;
		}
	}
	int a;
	int b;
	ull x;
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b >> x;
		d[a][b] = x;
		d[b][a] = x;
	}
	ull *r = new ull[n];
	bool *v = new bool[n];
	for (int i = 0; i < n; ++i)
	{
		r[i] = MAX;
		v[i] = false;
	}
	r[0] = 0;

	x = 0;
	for (int k = 0; k < n; ++k)
	{
		ull t = MAX;
		int i = 0;
		for (int j = 0; j < n; ++j)
		{
			if (!v[j] && r[j] <= t)
			{
				t = r[j];
				i = j;
			}
		}
		v[i] = true;

		x += r[i];
		for (int j = 0; j < n; ++j)
		{
			if (!v[j] && d[i][j] < MAX && r[j] > d[i][j])
			{
				r[j] = d[i][j];
			}
		}
	}
	cout << x;
}
