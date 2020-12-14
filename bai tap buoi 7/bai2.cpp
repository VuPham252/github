#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("nhap cac so vao mang:\n");
	scanf("%d",&arr[0]);
	
	for(int i=1;i<n;i++){
		int isInArray=1;	
		do{
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j]==arr[i]){
					isInArray=0;
					printf("so da ton tai, moi nhap lai:");
					i--;
					break;
				}
				
			}
		}
		while(!isInArray);
	}
	printf("array gom");
	for(int i=0;i<n;i++)
		printf("%5d",arr[i]);

}
