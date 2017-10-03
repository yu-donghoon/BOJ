#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <queue>
#include <utility>
#include <functional>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int t;
	cin >> t;

	while (t-- > 0)
	{
		queue<pair<int, int>> q;
		vector<int> v;

		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			int in;
			cin >> in;
			v.push_back(in);
			q.push(make_pair(i, in));
		}

		sort(v.begin(), v.end(), cmp);

		int cnt = 0;
		while (!q.empty())
		{
			int nowPos = q.front().first;
			int nowPri = q.front().second;

			if (nowPri < v[cnt])
				q.push(q.front());
			else
			{
				cnt++;
				if (m == nowPos)
					break;
			}
			q.pop();
		}
		cout << cnt << endl;
	}
	return 0;
}
