#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("nhap cac so vao mang:\n");
	scanf("%d",&arr[0]);
	
	for(int i=1;i<n;i++){
		int check=0;
		do{
			scanf("%d",&arr[i]);
			for(int j=0;j<i;j++){
				if(arr[j]==arr[i]){
					check=1;
					printf("moi nhap lai:");
					i--;
					break;
				}
				else
					check=0;
			}
		}
		while(!check);
	}

	for(int i=0;i<n;i++)
		printf("%d",arr[i]);
	}	
