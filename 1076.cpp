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

long long int convColor(string str)
{
	if (str == "black")
		return 0;
	else if (str == "brown")
		return 1;
	else if (str == "red")
		return 2;
	else if (str == "orange")
		return 3;
	else if (str == "yellow")
		return 4;
	else if (str == "green")
		return 5;
	else if (str == "blue")
		return 6;
	else if (str == "violet")
		return 7;
	else if (str == "grey")
		return 8;
	else if (str == "white")
		return 9;

}

int main(void)
{
	long long int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		string str;
		cin >> str;

		if (i < 2)
			sum += (long long int)(convColor(str) * pow(10.0, 1 - i));
		else
			sum = (long long int) (sum * pow(10.0, convColor(str)));
	}
	cout << sum << endl;
}