#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			printf("Day khong phai so nguyen to");
		}
		else{
			printf("Day la so nguyen to");
		}
	}
}

