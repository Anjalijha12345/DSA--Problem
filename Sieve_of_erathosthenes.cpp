#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i <= n; i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	}
	for (int i = 2; i <= n; i++)
		if (prime[i] == true)
			cout << i << endl;
}
int main()
{
	int n;
	cout << "Enter a Number:";
	cin >> n;
	sieve(n);
	return 0;
}