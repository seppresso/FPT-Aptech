#include <stdio.h>

int main(){
	int n;
	printf("nhap so n =");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i%2==0)
		printf("so chan la %d\n",i);
	}
}
