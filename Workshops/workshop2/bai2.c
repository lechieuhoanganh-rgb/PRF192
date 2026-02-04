#include<stdio.h>
#include<math.h>
int main(){
	float n;
	int count = 0;
	/*while (count<5){
		printf("nhap so: ");
		while (scanf("%f",&n)!=1 || n<0){
			printf("nhap lai so: ");
			scanf("%f",&n);
			while(getchar() != '\n');
	}
		printf("can bac hai cua %g la: %g\n",n,sqrt(n));
		count++;
	}*/
	while (1){
		printf("nhap so: ");
		while (scanf("%f",&n)!=1 || n<0){
			printf("nhap lai so: ");
			scanf("%f",&n);
			while(getchar() != '\n');
	}
	printf("can bac hai cua %g la: %g\n",n,sqrt(n));
	count++;
	if (count==5){
		break;
	}
	}
	printf("task complete");
	return 0;
}