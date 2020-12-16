#include<stdio.h>
int main(){
	int m;
	printf("nhap m hang,cot: ");
	scanf("%d",&m);
	int a[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int sum1=0;
	float s1;
	for(int i=0;i<m;i++)
		sum1+=a[i][i];
	s1=(float)sum1/m;
	printf("trung binh cong duong cheo chinh: %f",s1);
	
	int sum2=0;
	float s2;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if(j==m-i-1)
				sum2+=a[i][j];
		}
	}
	s2=(float)sum2/m;
	printf("\ntrung binh cong duong cheo phu: %f",s2);
}
