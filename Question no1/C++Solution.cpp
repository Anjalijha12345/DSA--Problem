// The duplicates function uses an unordered set to keep track of the elements that have been seen before. It also utilizes the
// property of the given array to mark duplicates by making elements negative. The main function demonstrates how to use the
// duplicates function for the provided examples.

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> duplicates(int a[], int n) {
    vector<int> result;
    unordered_set<int> seen;
    
    for (int i = 0; i < n; ++i) {
        int abs_a = abs(a[i]);
        if (a[abs_a] >= 0) {
            a[abs_a] = -a[abs_a];
        } else {
            result.push_back(abs_a);
        }
    }

    if (result.empty())
        result.push_back(-1);
    else
        sort(result.begin(), result.end());

    return result;
}

int main() {
    int a1[] = {0, 3, 1, 2};
    int n1 = 4;

    vector<int> result1 = duplicates(a1, n1);
    cout << "Example 1: ";
    for (int elem : result1)
        cout << elem << " ";
    cout << endl;

    int a2[] = {2, 3, 1, 2, 3};
    int n2 = 5;

    vector<int> result2 = duplicates(a2, n2);
    cout << "Example 2: ";
    for (int elem : result2)
        cout << elem << " ";
    cout << endl;

    return 0;
}
