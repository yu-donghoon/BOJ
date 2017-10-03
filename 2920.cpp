#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v;
	int before = 0;
	bool des = false, asc = false;
	for (int i = 0; i < 8; i++)
	{
		int input;
		cin >> input;
		if (i == 0)
			before = input;
		else
		{
			if (input > before)
				asc = true;
			else if (input < before)
				des = true;

			before = input;
		}
	}

	if (!asc && des)
		cout << "descending" << endl;
	else if (asc && !des)
		cout << "ascending" << endl;
	else
		cout << "mixed" << endl;

}