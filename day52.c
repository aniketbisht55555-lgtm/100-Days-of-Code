#include <stdio.h>
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;       
            high = mid - 1;  
        } else {
            low = mid + 1;   
        }
    }

    return ans;
}

int main() {
    int n, x;
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);
    printf("Index of ceil: %d\n", index);

    return 0;
}
