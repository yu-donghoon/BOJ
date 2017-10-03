#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

typedef struct chessStr
{
	int x;
	int y;
	int time;
}_chessStr;

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int n, m;
int nowTime;

int cheeseCnt = 0;
vector<string> map;
bool visit[251][251] = { false };
queue<pair<int, int>> q;

int wolfCnt = 0, sheepCnt = 0;

void BFS(void);

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		map.push_back(str);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if ((map[i][j] == 'o' || map[i][j] == 'v') && visit[i][j] == false)
			{
				visit[i][j] = true;
				q.push(make_pair(i, j));
				BFS();
			}
		}
	}

	cout << sheepCnt << " " << wolfCnt << endl;
}

void BFS(void)
{
	int dx[] = { 0,0,1,-1 };
	int dy[] = { 1,-1,0,0 };

	int numSheep = 0, numWolf = 0;
	while (!q.empty())
	{
		int nowX = q.front().second;
		int nowY = q.front().first;
		q.pop();

		if (map[nowY][nowX] == 'o')
			numSheep++;
		else if (map[nowY][nowX] == 'v')
			numWolf++;

		for (int i = 0; i < 4; i++)
		{
			int nextX = nowX + dx[i];
			int nextY = nowY + dy[i];

			if (nextX >= 0 && nextY >= 0 && nextX < m && nextY < n)
			{
				if (visit[nextY][nextX] == false && map[nextY][nextX] != '#')
				{
					visit[nextY][nextX] = true;
					q.push(make_pair(nextY, nextX));
				}
			}
		}
	}

	if (numSheep > numWolf)
		sheepCnt += numSheep;
	else
		wolfCnt += numWolf;

	return;
}