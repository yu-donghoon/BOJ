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
	cin >> n;

	vector<string> v1, v2;

	for (int i = 0; i < n; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;

		v1.push_back(str1);
		v2.push_back(str2);
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Distance :";
		for (int j = 0; j < v1[i].length(); j++)
		{
			if (v1[i][j] <= v2[i][j])
				cout << " " << v2[i][j] - v1[i][j];
			else
				cout << " " << (v2[i][j] + 26) - v1[i][j];
		}
		cout << endl;
	}
	return 0;
}