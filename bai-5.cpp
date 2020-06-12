#include <stdio.h>

int main(){
	int m, y;
	printf("nhap so tien($) can gui:\n");
	scanf("%d",&m);
	printf("nhap so nam muon gui:\n");
	scanf("%d",&y);
	float s=m;
	for(int i=1;i<=y;i++){
		float t;
		t=s*8/100;
		s+=t;
	}
	printf("tong so tien nhan duoc la %f",s);
}
