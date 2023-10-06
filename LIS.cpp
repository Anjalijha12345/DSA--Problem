#include<bits/stdc++.h>
using namespace std;

int lis(vector<int>& arr) {
    int n = arr.size();
    vector<int> lis_lengths(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j] && lis_lengths[i] < lis_lengths[j] + 1) {
                lis_lengths[i] = lis_lengths[j] + 1;
            }
        }
    }

    int max_length = 0;
    for (int i = 0; i < n; ++i) {
        if (lis_lengths[i] > max_length) {
            max_length = lis_lengths[i];
        }
    }

    return max_length;
}

int main() {
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int result = lis(arr);
    cout << "Length of Longest Increasing Subsequence: " << result << std::endl;

    return 0;
}
