#include<stdio.h>

int TerSearch(int a[], int l, int r, int key) {
    if (l > r)
        return -1;
    int mid1 = l + (r - l) / 3;
    int mid2 = r - (r - l) / 3;
    if (a[mid1] == key) {
        return a[mid1];
    }
    if (a[mid2] == key) {
        return a[mid2];
    }
    if (key < a[mid1]) {
        return TerSearch(a, l, mid1 - 1, key);
    } else if (key > a[mid2]) {
        return TerSearch(a, mid2 + 1, r, key);
    } else {
        return TerSearch(a, mid1 + 1, mid2 - 1, key);
    }
}

int main() {
    int a[10], n, key, s;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to search: \n");
    scanf("%d", &key);
    s = TerSearch(a, 0, n - 1, key);
    if (s != -1) {
        printf("\nElement is found");
    } else {
        printf("\nElement is not found");
    }
    return 0;
}
