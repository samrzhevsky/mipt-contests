#include <iostream>
#include <string>
#include <math.h>
#define ull unsigned long long int

using namespace std;

long double dist(long double a, long double b)
{
	return sqrt(a * a + b * b);
}

int main()
{
	int n;
	long double m;
	cin >> n >> m;

	long double *x = new long double[n];
	long double *y = new long double[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i] >> y[i];
	}

	long double **d = new long double *[n];
	for (int i = 0; i < n; ++i)
	{
		d[i] = new long double[n];
		for (int j = 0; j < i; ++j)
		{
			d[i][j] = -1;
			d[j][i] = -1;
			long double f = dist(x[i] - x[j], y[i] - y[j]);
			if (f <= m)
			{
				d[i][j] = f;
				d[j][i] = f;
			}
		}
	}

	long double *r1 = new long double[n];
	bool *v1 = new bool[n];
	long double *r2 = new long double[n];
	bool *v2 = new bool[n];
	for (int i = 0; i < n; ++i)
	{
		r1[i] = -1;
		v1[i] = false;
		r2[i] = -1;
		v2[i] = false;
	}
	r1[0] = 0;
	r2[1] = 0;

	for (int k = 0; k < n - 1; ++k)
	{
		long double t = -1;
		int i = 0;
		for (int j = 0; j < n; ++j)
		{
			if (!v1[j] && (r1[j] != -1) && (t == -1 || r1[j] <= t))
			{
				t = r1[j];
				i = j;
			}
		}
		v1[i] = true;
		for (int j = 0; j < n; ++j)
		{
			if (!v1[j] && (d[i][j] != -1) && (r1[j] == -1 || r1[j] > r1[i] + d[i][j]))
			{
				r1[j] = r1[i] + d[i][j];
			}
		}
	}

	for (int k = 0; k < n - 1; ++k)
	{
		long double t = -1;
		int i = 0;
		for (int j = 0; j < n; ++j)
		{
			if (!v2[j] && (r2[j] != -1) && (t == -1 || r2[j] <= t))
			{
				t = r2[j];
				i = j;
			}
		}
		v2[i] = true;
		for (int j = 0; j < n; ++j)
		{
			if (!v2[j] && (d[i][j] != -1) && (r2[j] == -1 || r2[j] > r2[i] + d[i][j]))
			{
				r2[j] = r2[i] + d[i][j];
			}
		}
	}
	long double b = -1;
	for (int i = 2; i < n; ++i)
	{
		if (x[i] < 0)
		{
			if (b == -1 || b > r1[i] + r2[i])
			{
				b = r1[i] + r2[i];
			}
		}
	}
	cout << b;
}
