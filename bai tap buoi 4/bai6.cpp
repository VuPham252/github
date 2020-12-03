#include<stdio.h>
int main(){
//	int n;
//	printf("Nhap so nguyen n: ");
//	scanf("%d",&n);
//	int a1=1,a2=1;
//	int a;
//	for(int i=3;i<=n;i++){
//		a=a1+a2;	
//		a1=a2;
//		a2=a;
//	}
//	printf("so thu %d cua day Fibonacci la %d",n,a);	
//}

//	giai
//	if(n<=0){
//		printf("So thu %d la: %d",n,0);
//	}else if(n<=2){
//			printf("So thu %d la: %d",n,1);
//	}else{
//		int x=0,y=1,z=1;
//		for(int i=3;i<n;i++){
//			x=y;
//			y=z;
//			z=x+y;
//		}
//		printf("So thu %d la %d",n,z);
//	
//	}
	
	
//	tim tiem can duoi cua a
	int a;
	printf("nhap so nguyen a: ");
	scanf("%d",&a);
	int x=0,y=1,z=1;
	if(a<=0){
		printf("So can tim la %d:",0);
	}else if(a<=2){
			printf("So can tim la: %d",1);
	}else{
		for(int i=3; y+z<a;i++){
			x=y;
			y=z;
			z=x+y;
			
		}
		printf("%d",z);
	}
	
	
}
