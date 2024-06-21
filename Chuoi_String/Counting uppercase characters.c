//Dem ki tu in hoa trong String
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int Dem_kitu_Hoa(char String[]) //Ham dem ki tu in hoa trong String 
{
	int i, count=0;
	for(i=0;String[i] != '\0' ;i++){
		if(isupper(String[i])){
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
 Dem_kitu_Hoa(String);
	printf("%d",Dem_kitu_Hoa(String));
	return 0;
}
