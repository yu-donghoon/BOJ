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
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << (A % C + B % C) % C << endl;
	cout << (A * B) % C << endl;
	cout << (A % C * B % C) % C << endl;

	return 0;
}