#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int R, C;
vector<vector<char>> map;
vector<char> path;
int result = -1;

bool visit[21][21] = { false };

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

void solve(int nowX, int nowY, int depth)
{
	result = max(result, depth);

	for (int i = 0; i < 4; i++)
	{
		int nextX = nowX + dx[i];
		int nextY = nowY + dy[i];

		if (nextX >= 0 && nextY >= 0 && nextY < R && nextX < C)
		{
			if (visit[nextY][nextX] == false)
			{
				visit[nextY][nextX] = true;

				bool check = false;
				for (int i = 0; i < path.size(); i++)
				{
					if (map[nextY][nextX] == path[i])
					{
						check = true;
						break;
					}
				}

				if (!check)
				{
					path.push_back(map[nextY][nextX]);
					solve(nextX, nextY, depth + 1);
					path.pop_back();
				}

				visit[nextY][nextX] = false;
			}
		}
	}
}

int main(void)
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		vector<char> input;
		for (int j = 0; j < C; j++)
		{
			char c;
			cin >> c;
			input.push_back(c);
		}
		map.push_back(input);
	}

	visit[0][0] = true;
	path.push_back(map[0][0]);

	solve(0, 0, 1);

	cout << result << endl;

	return 0;
}