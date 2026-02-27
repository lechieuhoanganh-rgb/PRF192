#include <stdio.h>
#include <stdlib.h>

float input(){
	float hours;
	printf("Nhap so gio(h): ");
	while (scanf("%f",&hours)!=1 || hours<0){
		printf("Nhap lai: ");
		while (getchar() != '\n');
	}
	return hours;
}
float moneypaying(){
	float rate;
	printf("Nhap muc luong($/h): ");
	while (scanf("%f",&rate)!=1 || rate <=0){
		printf("Nhap lai: ");
		while (getchar() != '\n');
	}
	return rate;
}
float calculate_salary(float hours, float rate) {
    float salary;

    if (hours <= 40)
        salary = hours * rate;
    else {
        float overtime = hours - 40;
        salary = (40 * rate) + (overtime * rate * 1.5);
    }

    return salary;
}
void output(float rate,float hours, float salary){
	printf("Luong co ban: %g(vnd)\n So gio lam: %g(h)\n Tong luong: %g",rate,hours,salary);
}
int main(){
	float hours = input();
	float rate = moneypaying();
	output(rate,hours, calculate_salary(hours,rate));
	return 0;
}