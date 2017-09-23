/*2017-09-23*/
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	queue<int> q;
	int num;
	int N,X;
	
	cin >> N >> X;

	for(int i = 1; i <= N; i ++)
	{
		cin >> num;
		if(num < X)
			q.push(num);
	}

	while(!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}

}
