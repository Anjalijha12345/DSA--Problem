#include <iostream>
#include <vector>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    // Initialize a table to store minimum coin counts for each amount
    vector<int> dp(amount + 1, amount + 1);
    
    // Base case: 0 coins needed to make change for 0 amount
    dp[0] = 0;
    
    // Loop through all possible amounts from 1 to the target amount
    for (int i = 1; i <= amount; ++i) {
        // Try each coin denomination
        for (int coin : coins) {
            if (i >= coin) {
                // Update the minimum coin count needed for the current amount
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    
    // If dp[amount] is still amount + 1, it means no combination of coins was found.
    // Otherwise, return the minimum coin count.
    return dp[amount] == amount + 1 ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5}; // Example coin denominations
    int amount = 11; // Example target amount

    int result = coinChange(coins, amount);

    if (result == -1) {
        cout << "It's not possible to make change for " << amount << " with the given coins." << endl;
    } else {
        cout << "Minimum number of coins needed to make change for " << amount << " is: " << result << endl;
    }

    return 0;
}
