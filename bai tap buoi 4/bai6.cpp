#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int a1=1,a2=1;
	int a;
	for(int i=3;i<=n;i++){
		a=a1+a2;	
		a1=a2;
		a2=a;
	}
	printf("so thu %d cua day Fibonacci la %d",n,a);	
}
