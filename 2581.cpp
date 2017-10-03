#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	bool ar[100001];

	fill(ar, ar + 100001, true);

	int N, M;
	cin >> M >> N;

	int sum = 0;
	int min = -1;

	for (int i = 2; i <= N; i++)
	{
		if (ar[i] == false)
			continue;

		if (i >= M && i <= N)
		{
			if (min == -1)
				min = i;
			sum += i;
		}

		for (int j = i + i; j <= N; j += i)
			ar[j] = false;
	}

	if (min != -1)
		cout << sum << endl << min << endl;
	else
		cout << min << endl;
}