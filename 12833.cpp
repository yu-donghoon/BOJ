#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int A, B, C;

	cin >> A >> B >> C;

	for (int i = 0; i < C; i++)
		A = A^B;
	cout << A << endl;
}