#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum << endl;
}