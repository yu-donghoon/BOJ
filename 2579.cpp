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

vector<int> v;
int dp[301] = { 0 };


int main(void)
{
	int n;

	v.push_back(0);
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int in;
		cin >> in;
		v.push_back(in);
	}

	dp[0] = 0;
	dp[1] = v[1];
	dp[2] = v[1] + v[2];

	for (int i = 3; i <= n; i++)
		dp[i] = max(v[i - 1] + dp[i - 3], dp[i - 2]) + v[i];

	cout << dp[n] << endl;
}