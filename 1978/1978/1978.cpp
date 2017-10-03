#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
	bool prime[1001];
	fill(prime, prime + 1001, true);
	prime[0] = prime[1] = false;

	for (int i = 2; i <= sqrt(1000); i++)
	{
		if (!prime[i])
			continue;

		for (int j = i + i; j <= 1000; j += i)
			prime[j] = false;
	}

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;

		if (prime[in])
			cnt++;
	}

	cout << cnt << endl;
}