#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int n, popElCount = 0;
	multiset<string> elems;
	string el, popEl;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> el;

		transform(el.begin(), el.end(), el.begin(), ::tolower);

		elems.insert(el);

		if (elems.count(el) > popElCount)
		{
			popElCount = elems.count(el);
			popEl = el;
		}
	}

	cout << popEl << " " << popElCount << endl;
}