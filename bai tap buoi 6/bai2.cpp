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
	for(int i=0;i<n;i++){
		if(arr[i]>0)
			break;
	}
	int num=0;
	for(int i=0;i<n;i++){
		if(arr[i]<num&&arr[i]>0){
			num=arr[i];
		}
		
	}
	if(num==0)
		printf("khong co so duong");
	else
		printf("so duong nho nhat la %d", num);
}
