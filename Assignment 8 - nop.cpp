#include <stdio.h>


int main(){
	int n,*p;
	printf("Nhap n=\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	int count=0,x=0;
	for(int i=0;i<n;i++){
		if(*(p+i)>0){
			count++;
			if(count>x)
				x=count;
			}else{
				count=0;
			}
		}
		printf("so luong so duong nhieu nhat la %d",x);
}
