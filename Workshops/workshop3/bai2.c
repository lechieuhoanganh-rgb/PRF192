#include <stdio.h>
#include <stdlib.h>

float input(){
	float distance;
	printf("Nhap so khoang cach can di(Km):");
	while (scanf("%f",&distance) != 1){
		printf("Nhap lai");
		while (getchar() != '\n');
	}
	return distance;
}
float calculate_taxi_fare(float distance) {
    float fare;

    if (distance <= 1)
        fare = 15000;
    else if (distance <= 30)
        fare = 15000 + (distance - 1) * 12000;
    else
        fare = 15000 + 29 * 12000 + (distance - 30) * 10000;

    return fare;
}
void ended(float distance){
	printf("So tien can tra la: %g",distance);
}
int main(){
	float distance = input();
	ended(calculate_taxi_fare(distance));
	return 0;
}