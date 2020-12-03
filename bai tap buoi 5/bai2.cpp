#include<stdio.h>

int main(){
	int n,x=0;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("Cac uoc cua n la: ");
	for(int i=1; i<=n;i++){
		if(n%i==0)
			printf("%d\t",i);	
			x=x+i;
	}

	printf("\nTong cac uoc la %d",x);
}
