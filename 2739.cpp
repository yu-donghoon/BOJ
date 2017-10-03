#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
		cout << N << " * " << i << " = " << N * i << endl;

	exit(0);
}