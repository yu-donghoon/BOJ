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

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}