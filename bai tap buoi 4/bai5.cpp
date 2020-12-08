#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int count=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			count++;
			break;
		}
	}
	if(count==0&&n>1){
		printf("Day la so nguyen to");
	}	
	else{
	
		printf("Day khong phai so nguyen to");		
}
	
}

