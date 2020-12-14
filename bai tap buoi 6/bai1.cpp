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
	int odd=0;
	for(int i=n-1; i>=0;i--){
		if(arr[i]%2!=0){
		
			odd=arr[i];
			break;
		}
	}
	if(odd==0)
		printf("khong co so le");
	else
	printf("So le cuoi cung cua mang la: %d",odd);
	
}
