#include <stdio.h>
#include <stdlib.h>

long long merge_and_count(int arr[], int temp[], int left, int mid, int right) {
    int l = left;    
    int r = mid + 1; 
    int k = left;    
    long long inv_count = 0;

    while (l <= mid && r <= right) {
        if (arr[l] <= arr[r]) {
            temp[k++] = arr[l++];
        } else {
            temp[k++] = arr[r++];
            inv_count += (mid - l + 1);
        }
    }

    while (l <= mid) {
        temp[k++] = arr[l++];
    }

    while (r <= right) {
        temp[k++] = arr[r++];
    }

    for (l = left; l <= right; l++) {
        arr[l] = temp[l];
    }

    return inv_count;
}

long long merge_sort_and_count(int arr[], int temp[], int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;

        inv_count += merge_sort_and_count(arr, temp, left, mid);
        inv_count += merge_sort_and_count(arr, temp, mid + 1, right);

        inv_count += merge_and_count(arr, temp, left, mid, right);
    }
    return inv_count;
}

long long count_inversions(int arr[], int n) {
    int *temp = (int *)malloc(sizeof(int) * n);
    return merge_sort_and_count(arr, temp, 0, n - 1);
}

int main() {
    int n;

    while (scanf("%d", &n) && n != 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        long long inversions = count_inversions(arr, n);

        if (inversions % 2 == 0) {
            printf("Carlos\n");
        } else {
            printf("Marcelo\n");
        }
    }

    return 0;
}
