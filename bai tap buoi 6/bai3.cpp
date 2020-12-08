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
	int count=0;
	int max=0;
	for(int i=0; i<n;i++){
		if(arr[i]>0){
			count++;
		}	
		else
			count=0;	
		if(count>=max)
			max=count;
	}
	
	printf("So luong cac so duong lien tiep nhieu nhat: %d",max);

}
