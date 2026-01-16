#include<stdio.h>
int main(){
	int day,month,year;
	scanf("%d/%d/%d",&day,&month,&year);
	if (day>=1 && day <=31 && month >=1 && month <=12){
		printf("%02d/%02d/%d",day,month,year);
	}
	else{
		printf("sai");
	}
}