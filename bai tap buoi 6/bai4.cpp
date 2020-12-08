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
	int sum=0;
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			sum+=arr[i];
		}
		else
			sum=0;
		if(sum>=max)
			max=sum;
	}
	printf("chuoi so duong co tong lon nhat %d", max);
}
