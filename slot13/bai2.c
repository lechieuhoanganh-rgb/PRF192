#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}