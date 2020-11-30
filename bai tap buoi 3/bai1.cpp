#include<stdio.h> 
int main(){
	int x;
	int temp;
	int res=0;
	printf("input x: ");
	scanf("%d",&x);
	
	if(x>=-9999&&x<=9999&&x!=0){
		temp=x%10;
		x=x/10;
		res=res*10+temp;
		if(x!=0){
			temp=x%10;
			x=x/10;
			res=res*10+temp;		
	 		if(x!=0){
	 			temp=x%10;
				x=x/10;
				res=res*10+temp;
	 			if(x!=0){
	 				temp=x%10;
					x=x/10;
					res=res*10+temp;
					if(x!=0){
						temp=x%10;
						x=x/10;
						res=res*10+temp;
					}
					else{
						printf("%d", res);
					}
				}else{
		   			printf("%d",res);
				}
		 	}else{
	 			printf("%d",res);
			}
	 	}
		else{
			printf("%d",res);
		}
	}
 	else
	printf("So nhap vao khong hop le");
}
