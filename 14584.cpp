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

	int n;
	cin >> n;

	vector<string> v;

	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			str[j] ++;
			if (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')))
				str[j] -= 26;
		}
		for (int j = 0; j < n; j++)
		{
			if (str.find(v[j]) != str.npos)
			{
				i = 26;
				break;
			}
		}
	}
	cout << str << endl;
}