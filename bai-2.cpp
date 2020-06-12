#include <stdio.h>

int main(){
	char a;
	
	printf("nhap ki tu yeu cau:\n");
	scanf("%c",&a);
	
	for(;a!='y' && a!='n' && a!='Y' && a!='N';){
	printf("nhap lai:\n");
	scanf("%c",&a);
    }
    printf("bingo");
}

