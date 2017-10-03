#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int t;
	cin >> t;

	vector<pair<int, int>> v;
	for (int i = 0; i < t; i++)
	{
		int w, h;
		cin >> w >> h;

		v.push_back(make_pair(w, h));
	}

	vector<int> result;
	for (int i = 0; i < v.size(); i++)
	{
		int cnt = 0;
		for (int j = 0; j < v.size(); j++)
		{
			if (i != j)
			{
				if (v[i].first < v[j].first && v[i].second < v[j].second)
					cnt++;
			}
		}
		result.push_back(cnt + 1);
	}

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
	return 0;
}