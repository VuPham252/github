#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c;
	printf("nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("nhap canh thu 2: ");
	scanf("%d",&b);
	printf("nhap canh thu 3: ");
	scanf("%d",&c);

	if(a+b>c&&b+c>a&&a+c>b){
		int p=(a+b+c)/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac la %.2f",s);
	}
	else{
		printf("Day khong phai 3 canh cua tam giac");
	}


}

