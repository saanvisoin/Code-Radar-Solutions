#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // To handle cases where k > n

    // Reverse the whole array
    reverse(arr, 0, n - 1);
    // Reverse first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    scanf("%d\n", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    rotateRight(arr, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }

    return 0;
}
