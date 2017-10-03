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

	string str;
	cin >> str;


	int sum = 0;
	for (int i = 0; i < str.length(); i++)
		sum += str[i] - 48;
	cout << sum << endl;
}