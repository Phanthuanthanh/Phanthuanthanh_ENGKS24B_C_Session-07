#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        printf("Phan tu arr[%d] = %d\n", i, arr[i]);  
    }
    printf("Do dai cua mang la: %d\n", size);

    return 0;
}

