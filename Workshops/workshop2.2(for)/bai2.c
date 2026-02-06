#include <stdio.h>
#include <math.h>

int main() {
    float n;
    int count;

    for (count = 0; count < 5; count++) {
        printf("nhap so: ");
        for ( ; scanf("%f",&n)!=1 || n<0 ; ) {
            printf("nhap lai so: ");
            scanf("%f",&n);
            while(getchar() != '\n');
        }
        printf("can bac hai cua %g la: %g\n", n, sqrt(n));
    }

    printf("task complete");
    return 0;
}
