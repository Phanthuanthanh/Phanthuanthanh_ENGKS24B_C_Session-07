#include <stdio.h>

int main() {
    int arr[5] = {2, 27, 31, 74, 88};  
    int count = 0; 

    printf("Cac so chan trong mang la: ");

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {  
            printf("%d ", arr[i]); 
            count++;  
        }
    }
    if (count == 0) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

