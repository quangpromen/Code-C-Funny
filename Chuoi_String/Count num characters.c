// Dem ki tu so
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int Dem_kitu_SO(char String[]){
	int i, count=0;
	for(i=0;String[i] != '\0' ;i++){
		if(isdigit(String[i])){
			count++;
		}
		
	}
	return count;
}
 

int main(){
	char String[100];
	int i, count=0;
	printf("Nhap chuoi: ");
	gets(String);
 Dem_kitu_SO(String);
	printf("%d",Dem_kitu_SO(String));
	return 0;
}
