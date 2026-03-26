#include<stdio.h>
#include<string.h>
typedef struct{
	int id;
	char name[30];
	float grade;
}sinhvien;
int main(){
	FILE *fp;
	fp = fopen("thongtinsv.txt","w");
	if (fp==NULL){
		printf("systen failed: exit");
		return 1;
	}
	int n;
	printf("Nhap so luong thong tin can nhap: ");
	scanf("%d",&n);
	sinhvien infor[n];
	for (int i=0;i<n;i++){
	printf("ID sinh vien: ");
	scanf("%d",&infor[i].id);
	getchar();
	printf("Ten sinh vien: ");
	fgets(infor[i].name, sizeof(infor[i].name), stdin);
	infor[i].name[strcspn(infor[i].name, "\n")] = 0;
	printf("Diem: ");
	scanf("%f",&infor[i].grade);
	fprintf(fp, "%d\n%s\n%.2f\n", infor[i].id, infor[i].name, infor[i].grade);
}
	fclose(fp);
	fp = fopen("thongtinsv.txt", "r");
    if (fp == NULL) {
        printf("Loi mo file d? d?c!");
        return 1;
    }

    printf("\nThong tin sinh vien: ");
    printf("%-10s %-20s %-10s\n", "ID", "Ho Ten", "Diem");
    
    sinhvien temp;

    while (fscanf(fp, "%d\n", &temp.id) != EOF) {
        fgets(temp.name, sizeof(temp.name), fp);
        temp.name[strcspn(temp.name, "\n")] = 0; 
        fscanf(fp, "%f\n", &temp.grade);
        printf("%22d %10s %23.2f\n", temp.id, temp.name, temp.grade);
    }

    fclose(fp);
    return 0;
}