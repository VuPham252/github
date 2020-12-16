#include<stdio.h>

int main(){
	int m,n;
	printf("nhap m hang: ");
	scanf("%d",&m);	
	printf("nhap n cot: ");
	scanf("%d",&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("nhap b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}	
				
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}	
	
	printf("tong cua 2 ma tran:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",c[i][j]);	
		}
		printf("\n");
	}

}	
