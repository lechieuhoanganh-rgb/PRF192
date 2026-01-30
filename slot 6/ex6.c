#include<stdio.h>
int main(){
	float cc,gk,ck,tk;
	char loai;
	printf("Nhap diem chuyen can: ");
	if (scanf("%f", &cc) != 1 || cc < 0 && cc>10) {
        printf("Nhap sai\n");
        return 0;
    }
	printf("nhap diem giua ky: ");
	    if (scanf("%f", &gk) != 1 || gk < 0 && gk>10) {
        printf("Nhap sai\n");
        return 0;
    }
	printf("nhap diem cuoi ky: ");
	    if (scanf("%f", &ck) != 1 || ck < 0 && ck>10) {
        printf("Nhap sai\n");
        return 0;
    }
	tk = cc*0.1+ gk*0.3 + ck*0.6;
	printf("Diem tong ket: %g\n",tk);
	 if (tk >= 8.5) {
        loai = 'A';
    } else if (tk >= 7.0) {
        loai = 'B';
    } else if (tk >= 5.5) {
        loai = 'C';
    } else if (tk >= 4.0) {
        loai = 'D';
    } else {
        loai = 'F';
    }
    printf("loai: %c\n",loai);
    if (cc>4 && gk>0 && ck>0 && loai != 'F'){
    	printf("du dieu kien tot nghiep");
	}
	else{
		printf("khong du diem tot nghiep");
	}
	return 0;
	
}