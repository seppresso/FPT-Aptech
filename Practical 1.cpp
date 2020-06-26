#include <stdio.h>
	
	void nhapmang(int a[], int &n)
	{
		printf("nhap so phan tu:");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			printf("phan tu thu a[%d]:\n",i);
			scanf("%d",&a[i]);
		}
	}
	
	void xuatmang(int a[], int n)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	
	void TimGiaTriChanCuoiCung(int a[], int n)
	{
		int gtc;
		printf("Gia tri chan cuoi cung:");
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0) gtc=a[i];
		}
		printf("%d",gtc);
	}
	int main(){
		int n,a[50];
		nhapmang(a,n);
		xuatmang(a,n);
		TimGiaTriChanCuoiCung(a,n);
		return 0;
}
