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
	int n;
	int map[1001][3] = { 0 };

	cin >> n;


	for (int i = 1; i <= n; i++)
		cin >> map[i][0] >> map[i][1] >> map[i][2];

	for (int i = 1; i <= n; i++)
	{
		map[i][0] = map[i][0] + min(map[i - 1][1], map[i - 1][2]);
		map[i][1] = map[i][1] + min(map[i - 1][0], map[i - 1][2]);
		map[i][2] = map[i][2] + min(map[i - 1][0], map[i - 1][1]);
	}

	cout << min(map[n][0], min(map[n][1], map[n][2]));
}