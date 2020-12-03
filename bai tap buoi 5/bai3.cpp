#include<stdio.h>

int main(){
	int a,b;
	int temp;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	
	if(a>b){
		for(int i=1; i<=b;i++){
			if(a%i==0&&b%i==0)
				temp=i;
	}
	printf("Uoc chung lon nhat la %d",temp);
	}else{
		for(int i=1; i<=a;i++){
			if(a%i==0&&b%i==0)
				temp=i;
		}
	}
		printf("Uoc chung lon nhat la %d",temp);
}
