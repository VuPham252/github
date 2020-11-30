#include<stdio.h> 
int main(){
	int x=4000;
	x=x+0.08*x;
	x=x+0.08*x;	
	x=x+0.08*x;
	x=x+0.08*x;
	printf("Goc: 4000\n");
	printf("Tong so tien sau 4 nam: %d",x);
}
