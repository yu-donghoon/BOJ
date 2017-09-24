#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int A, B, V;

	cin >> A >> B >> V;

	int sum = 0;

	int d = 0;

	while (1)
	{
		if (A + d *(A - B) >= V)
			break;
		d++;
	}

	cout << d + 1 << endl;
}