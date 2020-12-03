#include<stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("Cac so chan be hon n la: ");
	for(int i=1; i<n;i++){
		if(i%2==0)
		printf("%d\t",i);
	}
	
}
