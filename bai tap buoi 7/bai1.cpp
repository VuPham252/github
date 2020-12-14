#include<stdio.h>
#include<math.h>
int main(){
	int n,x;
	printf("Nhap n: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("nhap cac so vao mang: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("Nhap x: ");
	scanf("%d",&x);
	
	int min;
	int temp;
	int checknum;
	int check=0;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			temp=x-arr[i];	
			min=temp;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			temp=x-arr[i];
			if(temp<min){
				checknum=arr[i];
				min=temp;
			}
			else
				check=1;
		}
		else
			check=1;
	}
	if(check==0)
		printf("so co gia tri nho hon va gan x nhat la %d",checknum);
	else
		printf("khong co so nao nho hon va gan x nhat");
}


