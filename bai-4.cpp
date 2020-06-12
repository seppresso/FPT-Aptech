#include <stdio.h>

int main(){
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	int s;
	for(int i=1;i<=n;i++){
	if(n%i==0)
	s+=i;
	}
	printf("tong cac uoc la %d",s);
}
