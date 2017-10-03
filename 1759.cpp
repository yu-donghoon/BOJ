#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

vector<char> v;
int L, C;

void solve(string str, int now, int mo, int ja, int depth)
{
	if (depth == L)
	{
		if (mo > 0 && ja > 1)
			cout << str << endl;
		return;
	}

	for (int i = now; i < v.size(); i++)
	{
		str += v[i];
		switch (v[i])
		{
		case 'a': mo++; break;
		case 'e': mo++; break;
		case 'i': mo++; break;
		case 'o': mo++; break;
		case 'u': mo++; break;
		default: ja++; break;
		}
		solve(str, i + 1, mo, ja, depth + 1);

		switch (v[i])
		{
		case 'a': mo--; break;
		case 'e': mo--; break;
		case 'i': mo--; break;
		case 'o': mo--; break;
		case 'u': mo--; break;
		default: ja--; break;
		}

		str.pop_back();
	}
}

int main(void)
{
	cin >> L >> C;

	for (int i = 0; i < C; i++)
	{
		char c;
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end());

	string str;
	solve(str, 0, 0, 0, 0);

	return 0;
}