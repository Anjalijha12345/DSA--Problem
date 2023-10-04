#include <bits/stdc++.h>
using namespace std;

int maxi(int a, int b) { return (a > b) ? a : b; }
int knapSack(int C, int wt[], int val[], int n)
{

	if (n == 0 || C == 0)
		return 0;

	if (wt[n - 1] > C)
		return knapSack(C, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(C - wt[n - 1], wt, val, n - 1),
			knapSack(C, wt, val, n - 1));
}

int main()
{
	int profit[] = { 6, 70, 150 };
	int weight[] = { 12, 25, 40 };
	int C = 65;
	int n = sizeof(profit) / sizeof(profit[0]);
	cout << knapSack(C, weight, profit, n);
	return 0;
}

