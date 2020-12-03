#include<stdio.h>

int main(){
	int a,b;
	int temp;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	
	
	for(int i=1; i<=a*b;i++){
		if(i%a==0&&i%b==0){
			temp=i;
			break;
		}
	}
	printf("Boi chung nho nhat la %d",temp);

}
