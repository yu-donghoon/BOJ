#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string str;
	cin >> str;

	bool flag = true;
	for (int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - (i + 1)])
		{
			flag = false;
			break;
		}
	}
	cout << flag << endl;
}