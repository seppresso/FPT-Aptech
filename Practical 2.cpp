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
	
	void TrungBinhCong(int a[], int n)
	{
		int s=0;
		float tbc=0;
		printf("Trung Binh Cong cua cac so la:");
		for(int i=0;i<n;i++)
		{
			s+=a[i];
		}
		tbc=(float)s/n;
		printf("%2f",tbc);
	}
	
	int main(){
		int n,a[50];
		nhapmang(a,n);
		xuatmang(a,n);
		TrungBinhCong(a,n);
		return 0;
}
