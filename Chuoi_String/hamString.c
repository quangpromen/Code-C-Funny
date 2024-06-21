#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* ltrim(char s[]) // Cat khoang trong ben trai
{
	int i=0;
	while (s[i]==' ') {
		i++;
	if (i>=0){
	strcpy(&s[0], &s[i]);
	}
	}
return s;
}

char* rtrim(char s[]) // cat khoang trong ben phai
{
	int i=strlen(s)-1;
	while (s[i]==' '){
		i--;
	s[i+1]= '\0';
	} 
	return s;
}

char* trim(char s[]) // Bien doi chuoi goc ===> chuoi co khoang trang thich hop
{
	rtrim(ltrim(s));
	char *ptr = strstr(s, " ");
	while (ptr != NULL){
		strcpy(ptr, ptr+1);
		ptr=strstr(s, "  ");
	}
	return s;
}
char* nameStr(char s[]) // Viet ten rieng
{
    trim(s);
    strlwr(s);
    int L = strlen(s);
    int i;
    for (i = 0; i < L; i++) {
        if (i == 0 || (i > 0 && s[i - 1] == ' ')) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}
int main(){

	char s[50];
	printf("Enter string s1:");
	fgets(s, sizeof(s), stdin);
	
	nameStr(s);
	puts(s);


	
	getchar();
	return 0;
	//ltrim(s);
	//rtrim(s);
	//	trim(s);
	//nameStr(s);
	//lTrim(s);
}
// int strlen : do dai cua chuoi
//char strcpy : sao chiep chuoi nguon sang chuoi dich
//int strcmp(char s[1], char s[2]) ==> -1, 0, 10 : so sánh 2 chuoi
// char strcat( char dest[], char src[]) : Noi chuoi src  vao dest
//char strlwr : bien doi chuoi thanh chu thuong
//char strstr(char src[], char subStr[]):  tim dia chi cua mot chuoi con . neu sunStr ko ton tai thi NULL
