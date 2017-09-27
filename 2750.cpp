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
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		pq.push(tmp);
	}

	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
	return 0;
}