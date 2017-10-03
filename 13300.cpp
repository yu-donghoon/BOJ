#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int student[2][6] = { 0 };

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		int s, grade;
		cin >> s >> grade;
		student[s][grade - 1]++;
	}

	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (student[i][j] % k == 0)
				sum += student[i][j] / k;
			else
				sum += (student[i][j] / k) + 1;
		}
	}
	cout << sum << endl;
}