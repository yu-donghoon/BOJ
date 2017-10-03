#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;


int main()
{
	queue<pair<int, int>> q;
	vector<int> map[502];
	int visit[502] = { false };

	int N;
	cin >> N;

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int from, to;
		cin >> from >> to;

		map[from].push_back(to);
		map[to].push_back(from);
	}
	q.push(make_pair(1, 0));
	visit[1] = true;

	int cnt = 0;
	while (!q.empty())
	{
		int now = q.front().first;
		int depth = q.front().second;
		q.pop();

		for (int i = 0; i < map[now].size(); i++)
		{
			int next = map[now][i];
			if (visit[next] == false)
			{
				visit[next] = true;
				cnt++;
				if (depth < 1)
				{
					q.push(make_pair(next, depth + 1));
				}
			}
		}
	}

	cout << cnt << endl;
}
