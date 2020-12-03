#include<stdio.h>
int main(){
	
	int a=0;
	for(int i=0;i<=200;i++){
		if(i%2!=0){
			a=a+i;
		}
	}
	printf("%d",a);

//	int s=0;
//	for(int i=0,j=0;i<200;j++){
//		if(j%2!=0)
//			s+=j;
//			i++;
//	}
//	printf("%d",s);
}
