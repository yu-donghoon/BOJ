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
	int N, M;
	cin >> N >> M;

	vector<string> map;

	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;
		map.push_back(str);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = map[i].length() - 1; j >= 0; j--)
			cout << map[i][j];
		cout << endl;
	}
	return 0;
}