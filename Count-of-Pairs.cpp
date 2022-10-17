#include <bits/stdc++.h>
using namespace std;

int pairCount(map<string, int> &d)
{
	int sum = 0;
	for (auto i : d)
		sum += (i.second * (i.second - 1)) / 2;

	return sum;
}

int difference(vector<string> &array, int m)
{
	map<string, int> changed, same;

	for (auto s : array)
	{
		same[s]++;

		for (int i = 0; i < m; i++)
		{
			string t = s.substr(0, i) + "//" + s.substr(i + 1);

			changed[t]++;
		}
	}

	return pairCount(changed) - pairCount(same) * m;
}


int main()
{
	int n = 3, m = 3;
	vector<string> array = {"abc", "abd", "bbd"};
	cout << difference(array, m) << endl;

	return 0;
}

