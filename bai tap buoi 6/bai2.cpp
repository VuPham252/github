#include<stdio.h>
int main(){
	int n;
	printf("input size: ");
	scanf("%d",&n);
	int arr[n];
	printf("input elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int num;
	for(int i=0;i<n;i++){
		if(arr[i]<num&&arr[i]>0){
			num=arr[i];
		}
		
	}
	printf("so duong nho nhat la %d", num);
}
