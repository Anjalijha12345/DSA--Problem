// Sieve of Erathosthenes
// This Algorithm is used to find all the prime numbers between 1 to n in time complexity : (n*log(log n)) and space compelxity : o(n).
// Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number. For example, if n is 10, the output should be “2, 3, 5, 7”. If n is 20, the output should be “2, 3, 5, 7, 11, 13, 17, 19”.

// According to the algorithm we will mark all the numbers which are divisible by 2 and are greater than or equal to the square of it. And then we moved to next number 3 and mark all the number divisible by 3 and are greater than or equal to square of it and so on.

#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	// create a vector to store whether the number is prime or not. If the value at current index is true than it means it is a prime number otherwise it is not a prime number.
  vector<bool> prime(n+1,false);

	for (int p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (int i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p=2; p<=n; p++)
	if (prime[p])
		cout << p << " ";
}

//main function
int main()
{
	int n;
  cin>>n;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
