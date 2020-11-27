#include<stdio.h> 

int main(){
	
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);	

	if(a>=2){
		if(a<=8){
			if(a==8){
				printf("Chu nhat");
			}
			else{
				if(a==7){
					printf("Thu 7");
				}
				else{
					if(a==6){
						printf("Thu 6");
					}
					else{
						if(a==5){
							printf("Thu 5");
						}
						else{
							if(a==4){
								printf("Thu 4");
							}
							else{
								if(a==3){
									printf("Thu 3");
								}
								else{
									if(a==2){
										printf("Thu 2");	
									}
									else{
										printf("Khong phai ngay trong tuan");	
									}
								}
							}
						}
					
					}
				
				}
			
			}
		
		}
		else{
			printf("Khong phai ngay trong tuan");	
		}
	}
	else{
		printf("Khong phai ngay trong tuan");
	}
	
}
