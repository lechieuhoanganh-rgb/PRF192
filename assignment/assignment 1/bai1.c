#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("baitap.txt","w");
	if (fp==NULL){
		printf("error");
		return 0;
	}
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	fprintf(fp,"gia tri n: %d",n);
	
	fclose(fp);
	fp = fopen("baitap.txt","r");
	if (fp==NULL){
		printf("error");
		return 0;
	}
	char s;
	do{
		s=getc(fp);
		printf("%c",s);
	}
	while (s!=EOF);
	fclose(fp);
	return 0;
}