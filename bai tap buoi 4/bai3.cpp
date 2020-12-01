#include<stdio.h>
int main(){
	
	int a=0;
	for(int i=0;i<=100;i++){
		if(i%2!=0){
			a=a+i;
		}
	}
	printf("%d",a);
}
