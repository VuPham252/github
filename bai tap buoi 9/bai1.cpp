#include<stdio.h>

bool find(int arr[],int a, int n){
	for(int i=0;i<n;i++){
		if(arr[i]==a){
			return true;
		}
	}
	return false;
}

void inSoLe(int arr[],int n){
	printf("Cac so le trong mang: ");
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0)
			printf("%5d",arr[i]);
	}
}


int main(){

	int n,x;
	printf("nhap n: ");
	scanf("%d",&n);
	int arr[n];	
	for(int i=0;i<n;i++){
		printf("nhap arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("nhap so can tim: ");
	scanf("%d",&x);

	if(find(arr,x,n))
		printf ("%d co trong mang\n",x);
	else
		printf("%d khong co trong mang\n",x);

	inSoLe(arr,n);
}
