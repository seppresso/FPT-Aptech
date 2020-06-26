#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*p;
	printf("Nhap n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	int x;
	printf("Nhap x = \n");
	scanf("%d",&x);
	printf("mang truoc khi dich chuyen:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
	for(int i=0;i<x;i++){
		// xoay vong so
		int tmp = *(p+n-1);
		for(int j=n-1;j>=1;j--){
			*(p+j) = *(p+j-1);
		}
		*p = tmp;
	}
	printf("\n mang sau khi dich chuyen:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
}
