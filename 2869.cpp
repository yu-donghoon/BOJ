#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int A, B, V;
	int d = 0;

	scanf("%d %d %d", &A, &B, &V);

	while (A + d *(A - B) < V)
		d++;

	printf("%d\n", d + 1);

}