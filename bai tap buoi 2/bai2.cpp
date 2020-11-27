#include<stdio.h> 

int main(){
	
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);

	if(a>=b){
		printf("%0.3f",float(a)/b);
	}
	else{
		printf("%d",a*b);
	}
}
