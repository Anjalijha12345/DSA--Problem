#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // If the key is at the middle
        if (arr[mid] == key)
        {
            return mid;
        }

        (left = (arr[mid] < key) ? mid + 1 : mid - 1);

    }

    return -1; // Return -1 if the key is not found
}

int main()
{
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    (result != -1) ? printf("%d found at index %d.\n", key, result) : printf("%d not found in the array.\n", key); 

    return 0;
}
