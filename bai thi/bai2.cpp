#include<stdio.h>
#include<string.h>
void upperCase(char str[]){
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]>=97&&str[i]<=122){
			str[i]-=32;
		}
	}	
}

int main(){
	char str[100];
	printf("Enter string: ");
	scanf("%[^\n]",str);
	upperCase(str);
	printf("Upper Case: %s",str);
	
}

