#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void play_game() {
    int secret, guess;
    int attempts = 7;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("\n>>> GAME DOAN SO (1-100) <<<\n");

    for (int i = 1; i <= attempts; i++) {
        printf("Lan %d - Nhap so: ", i);
        scanf("%d", &guess);

        if (guess < 0) {
            printf("So khong hop le!\n");
            i--;
            continue;
        }

        if (guess == secret) {
            printf("Ban da doan dung!\n");
            break;
        } else if (guess < secret)
            printf("So can tim lon hon!\n");
        else
            printf("So can tim nho hon!\n");

        if (i == attempts)
            printf("Ban da thua! So dung la %d\n", secret);
    }
}

int main() {
    play_game();
    return 0;
}