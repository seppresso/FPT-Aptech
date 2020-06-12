#include <stdio.h>

int main(){
	float x1,x2;
	int n;
	printf("nhap so tien gui:\n");
	scanf("%f",&x1);
	printf("nhap so tien muon nhan:\n");
	scanf("%f",&x2);
		for(n=0;x1<=x2;n++){
			float lai;
			lai=x1*8/100;
			x1+=lai;
		}
		printf("so nam la : %d",n);
	}
