#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int d[100002];

	for (int i = 0; i < 100002; i++)
		d[i] = i;

	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 2; j*j <= i; j++)
			d[i] = min(d[i], d[i - j*j] + 1);
	}


	cout << d[n] << endl;
}