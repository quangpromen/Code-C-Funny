#include<stdio.h>
#include<string.h>
int my_strlen(char x[]){
	int count=0;
	while (x[count]!='\0'){
		count++;
	}
	return count++;
	
}
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
int main(){
	char ten[50];
	printf("Nhap ");
	fgets(ten, sizeof(ten),stdin);
	xoaXuongDong(ten);
	printf("Do dai ten = %d", strlen(ten));
	my_strlen(ten);
	printf("\n %d",my_strlen(ten));
}
