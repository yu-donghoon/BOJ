#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

string str;
int maxNum = 0;
char maxChar = -1;

bool cmp(pair<int, char> a, pair<int, char> b)
{
	return a.first > b.first;
}

int main(void)
{
	pair<int, char> p;
	p.first = 0;
	p.second = -1;
	vector<pair<int, char>> v(26, p);

	int map[26] = { 0 };

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;


		v[str[i] - 'A'].first++;
		v[str[i] - 'A'].second = str[i];
	}

	sort(v.begin(), v.end(), cmp);

	if (v[0].first == v[1].first)
		cout << "?" << endl;
	else
		cout << v[0].second << endl;
}