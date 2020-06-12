#include <stdio.h>

int main(){
	int n;
	do{
		printf("nhap 1 date in week:\n");
		scanf("%d",&n);
	}while(!(n>1 && n<9));
	if(n==5)
		printf("thu 5");
	if(n==2)
	    printf("thu 2");
	if(n==3)
	    printf("thu 3");
	if(n==4)
	    printf("thu 4");
	if(n==6)
	    printf("thu 6");
	if(n==7)
	    printf("thu 7");
	if(n==8)
	    printf("chu nhat");

	
}
