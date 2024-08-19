#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long merge_and_count(char arr[][11], char temp[][11], int left, int mid, int right) {
    int l = left;    
    int r = mid + 1; 
    int k = left;    
    long long inv_count = 0;

    while (l <= mid && r <= right) {
        if (strcmp(arr[l], arr[r]) <= 0) {
            strcpy(temp[k++], arr[l++]);
        } else {
            strcpy(temp[k++], arr[r++]);
            inv_count += (mid - l + 1);
        }
    }

    while (l <= mid) {
        strcpy(temp[k++], arr[l++]);
    }

    while (r <= right) {
        strcpy(temp[k++], arr[r++]);
    }

    for (l = left; l <= right; l++) {
        strcpy(arr[l], temp[l]);
    }

    return inv_count;
}

long long merge_sort_and_count(char arr[][11], char temp[][11], int left, int right) {
    int mid;
    long long inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;

        inv_count += merge_sort_and_count(arr, temp, left, mid);
        inv_count += merge_sort_and_count(arr, temp, mid + 1, right);

        inv_count += merge_and_count(arr, temp, left, mid, right);
    }
    return inv_count;
}

long long count_inversions(char arr[][11], int n) {
    char temp[n][11];
    return merge_sort_and_count(arr, temp, 0, n - 1);
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        char arr[n][11];

        for (int i = 0; i < n; i++) {
            scanf("%s", arr[i]); 
        }

        printf("%lld\n", count_inversions(arr, n));
    }

    return 0;
}
