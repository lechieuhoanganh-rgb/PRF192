#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int is_leap_year(int year) {
    if (year % 4 == 0)
        return 1;
    else
        return 0;
}

int get_days_in_month(int month, int year) {
    switch (month) {
        case 1: 
		case 3: 
		case 5: 
		case 7:
        case 8: 
		case 10: 
		case 12:
            return 31;
        case 4: 
		case 6: 
		case 9: 
		case 11:
            return 30;
        case 2:
            if (is_leap_year(year))
                return 29;
            else
                return 28;
        default:
            return 0;
    }
}

int input1() {
    int month;

    printf("Nhap thang: ");

    while (scanf("%d", &month) != 1 || month >12 || month<=0) {
        while (getchar() != '\n');
        printf("Nhap lai thang: ");
    }

    return month;   
}

int input2() {
    int year;

    printf("Nhap nam: ");

    while (scanf("%d", &year) != 1 || year<=0) {
        while (getchar() != '\n');
        printf("Nhap lai nam: ");
    }

    return year;   
}

void outscreen(int month, int year){
	printf("Nam nay la thang %d nam %d\n",month, year);
}
int main(){
	int month = input1();
	int year = input2();
	outscreen(month,year);
	if (is_leap_year(year)==1){
		printf("Nam %d la nam nhuan\n",year);
	}
	else{
		printf("Nam %d khong phai nam nhuan\n",year);
}
	printf("Co %d ngay",get_days_in_month(month,year));
	return 0;
}
