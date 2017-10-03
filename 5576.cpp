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
	priority_queue<int, vector<int>, less<int>> pq1, pq2;

	for (int i = 0; i < 10; i++)
	{
		int in;
		cin >> in;
		pq1.push(in);
	}

	for (int i = 0; i < 10; i++)
	{
		int in;
		cin >> in;
		pq2.push(in);
	}

	int sum1 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum1 += pq1.top();
		pq1.pop();
	}

	int sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum2 += pq2.top();
		pq2.pop();
	}

	cout << sum1 << " " << sum2 << endl;
}