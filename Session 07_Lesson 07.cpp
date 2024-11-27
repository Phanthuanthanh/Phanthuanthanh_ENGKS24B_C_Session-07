#include <stdio.h>

int main() {
    int n;

    printf("Moi ban nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("Moi ban nhap lai so phan tu le.");
            }
        } while (arr[i] % 2 == 0);
    }
    return 0;
}

