/*2017-09-24*/
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void DFS(int now);
void BFS(int now);

int v[1001][1001] = { -1, };
bool visit[1001] = { false };
queue<int> q;
int N, M, start;


int main(void)
{
	cin >> N >> M >> start;

	for (int i = 0; i < M; i++)
	{
		int to, from;
		cin >> to >> from;

		v[to][from] = 1;
		v[from][to] = 1;
	}

	DFS(start);
	cout << endl;

	for (int i = 0; i <= N; i++)
		visit[i] = false;

	BFS(start);
	cout << endl;

	return 0;
}

void DFS(int now)
{
	cout << now << " ";

	visit[now] = true;

	for (int i = 1; i <= N; i++)
	{
		if (!visit[i] && v[now][i] == 1)
		{
			DFS(i);
		}
	}
}

void BFS(int now)
{
	q.push(now);
	visit[now] = true;

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();

		cout << cur << " ";

		for (int i = 1; i <= N; i++)
		{
			if (!visit[i] && v[cur][i] == 1)
			{
				q.push(i);
				visit[i] = true;
			}
		}
	}
}
