#include<stdio.h> 

int main(){
	
	int d,m;
	int doy;
	printf("Nhap d: ");
	scanf("%d",&d);
	printf("Nhap m: ");
	scanf("%d",&m);

	if(m>=1&&m<=12){
		if(m==1){
			if(d>=1&&d<=31){
				if((d%7)==1){
					printf("Thu 2");
				}	
				else{
					if((d%7)==2){
						printf("Thu 3");
					}
					else{
						if((d%7)==3){
							printf("Thu 4");
						}
						else{
							if((d%7)==4){
								printf("Thu 5");
							}
							else{
								if((d%7)==5){
									printf("Thu 6");
								}
								else{
									if((d%7)==6){
										printf("Thu 7");
									}
									else{
										if((d%7)==0){
											printf("Chu nhat");
										}
									}
								}
							}
						}
					}
				}
			}
			else{
				printf("Ngay khong hop le");
			}
		}	
		else{
			if(m==2){
				
			}
			else{
				if(m==3){
					
				}
				else{
					if(m==4){
						
					}
					else{
						if(m==5){
							
						}
						else{
							if(m==7){
								
							}
							else{
								if(m==8){
									
								}
								else{
									if(m==9){
										
									}
									else{
										if(m==10){
											
										}
										else{
											if(m==11){
												
											}
											else{
												if(m==12){
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else{
		printf("Thang khong hop le");
	}
}
