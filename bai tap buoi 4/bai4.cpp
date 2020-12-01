#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int p,s;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	
	while (!(a+b>c&&a+c>b&&b+c>a)){
	
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
}
	p=a+b+c;
	s=sqrt((p/2)*(p/2-a)*(p/2-b)*(p/2-c));
	printf("Chu vi tam giac: %d\n",p);
	printf("Dien tich tam giac: %d",s);
}
