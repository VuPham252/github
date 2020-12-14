#include<stdio.h>

int main(){
	int arrayLength;
	printf("Nhap n: ");
	scanf("%d",&arrayLength);
	int arr[arrayLength];
	
	printf("nhap cac so vao mang:\n");
	scanf("%d",&arr[0]);
	int i = 1;
	bool inputCompleted = false;
	while(!inputCompleted){
		if(i == arrayLength){
			inputCompleted = true;
			continue;
		}
		int isInArray = 0;
		int inputNumber;
		scanf("%d",&inputNumber);
		for(int j = 0; j < i; j++){
			if(inputNumber == arr[j]){
				isInArray = 1;
				printf("so da ton tai, moi nhap lai:");
				break;
			}	
		}

		if(isInArray == 0){
			arr[i] = inputNumber;
			i++;	
		}
	}
		
		
	
	
	printf("array gom");
	for(int i=0;i<arrayLength;i++)
		printf("%5d",arr[i]);

}


