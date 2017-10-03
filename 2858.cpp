v#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int R, B;

int main()
{
	scanf("%d %d", &R, &B);
	int num = R + B;

	vector<int> v;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			v.push_back(i);
		if (i * i == num)
			v.push_back(i);
	}

	int L = 0, W = 0;
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] * v[j] == num)
			{
				if (v[i] * 2 + v[j] * 2 - 4 == R)
				{
					L = max(v[i], v[j]);
					W = min(v[i], v[j]);
				}
			}
		}
	}
	cout << L << " " << W << endl;
}
