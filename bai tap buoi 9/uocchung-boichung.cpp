#include<stdio.h>

int uocChungLonNhat(int a, int b){
	
	int ucln=0;
	if(a<b){
		for(int i=1;i<=a;i++){
			if(a%i==0&&b%i==0&&i>ucln){
				ucln =i;
			}
		}
		return ucln;
	}
	else{
		for(int i=1;i<=b;i++){
			if(a%i==0&&b%i==0&&i>ucln){
				ucln =i;
			}
		}
		return ucln;
	}
		
}

int boiChungNhoNhat(int a, int b){
	int bcnn;
	for(int i=1;i<a*b;i++){
		if(i%a==0&&i%b==0){
			bcnn=i;
			break;
		}
	}
	return bcnn;
}


int main(){
	int a,b;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	int max =uocChungLonNhat(a,b);
	printf("Uoc chung lon nhat la %d\n",max);
	int min=boiChungNhoNhat(a,b);
	printf("Boi chung nho nhat la %d", min);
}
