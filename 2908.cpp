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
	int n1, n2;

	cin >> n1 >> n2;

	n1 = (n1 / 100) + ((n1 % 100 / 10) * 10) + ((n1 % 10) * 100);
	n2 = (n2 / 100) + ((n2 % 100 / 10) * 10) + ((n2 % 10) * 100);

	cout << ((n1 > n2) ? n1 : n2) << endl;

	return 0;
}