#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <queue>

using namespace std;

int main(void)
{
	int dx[] = { 0,0,-1,1, -1,-1,1,1 };
	int dy[] = { 1,-1,0,0,1,-1,1,-1 };

	while (1)
	{
		int w, h;
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;

		vector<vector<int>> map;
		queue<pair<int, int>> q;
		bool visit[51][51] = { false };

		for (int i = 0; i < h; i++)
		{
			vector<int> v;
			for (int j = 0; j < w; j++)
			{
				int in;
				cin >> in;

				v.push_back(in);
			}
			map.push_back(v);
		}

		int result = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (map[i][j] == 1 && visit[i][j] == false)
				{
					result++;
					q.push(make_pair(i, j));
					visit[i][j] = true;

					while (!q.empty())
					{
						int nowX = q.front().second;
						int nowY = q.front().first;

						q.pop();

						for (int i = 0; i < 8; i++)
						{
							int nextX = nowX + dx[i];
							int nextY = nowY + dy[i];

							if (nextX >= 0 && nextX < w && nextY >= 0 && nextY < h && map[nextY][nextX] == 1)
							{
								if (visit[nextY][nextX] == false)
								{
									visit[nextY][nextX] = true;
									q.push(make_pair(nextY, nextX));
								}
							}
						}
					}

				}
			}
		}
		cout << result << endl;
	}
}