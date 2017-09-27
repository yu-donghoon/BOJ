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

struct position
{
	int y = 0;
	int x = 0;
}_position;

position pos[25 + 1];
bool map[5][5] = { false };

int cnt = 0;
int result;
int input;

void checkDiagonalL()
{
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (map[i][i] == false)
		{
			check = true;
			break;
		}
	}
	if (check == false)
		cnt++;
}

void checkDiagonalR()
{
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (map[i][4 - i] == false)
		{
			check = true;
			break;
		}
	}
	if (check == false)
		cnt++;
}

void checkCols(int x)
{
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (map[i][x] == false)
		{
			check = true;
			break;
		}
	}
	if (check == false)
		cnt++;
}

void checkRows(int y)
{
	bool check = false;
	for (int i = 0; i < 5; i++)
	{
		if (map[y][i] == false)
		{
			check = true;
			break;
		}
	}
	if (check == false)
		cnt++;
}

void checkLine(int x, int y)
{
	if (x == y)
		checkDiagonalL();
	if (x + y == 4)
		checkDiagonalR();
	checkCols(x);
	checkRows(y);
}

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int n;
			cin >> n;
			pos[n].y = i;
			pos[n].x = j;
		}
	}

	for (int i = 0; i < 25; i++)
	{
		cin >> input;
		map[pos[input].y][pos[input].x] = true;
		if (cnt < 3)
		{
			checkLine(pos[input].x, pos[input].y);
			result = i + 1;
		}
	}

	cout << result << endl;
}