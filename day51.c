#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            result = mid;     // Record the index
            end = mid - 1;    // Keep searching on the left side
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            result = mid;     // Record the index
            start = mid + 1;  // Keep searching on the right side
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    // Take array size input
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    // Take sorted array elements input
    printf("Enter %d sorted elements (repeats allowed):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Take target element input
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find occurrences
    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    // Print the results
    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);

    return 0;
}