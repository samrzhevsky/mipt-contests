#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;

	set<int> elems;
	int el;
	for (int i = 0; i < n; i++)
	{
		cin >> el;
		elems.insert(el);
	}

	cout << elems.size() << endl;
}