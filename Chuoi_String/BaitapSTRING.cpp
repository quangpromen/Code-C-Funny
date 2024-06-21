#include<stdio.h>
#include<string.h>
#include<ctype.h>
void upperString(char s[]) // Ham viet hoa chu cai dau tien
{
	int n= strlen(s);
	int i;
	for(i=0; i<n; i++)
	if ((i==0)|| (s[i-1]==' '))
	if(s[i]>= 'a' && s[i]<= 'z')
	s[i] = toupper(s[i]);
	
}
int countAlphabet(char s[]) // dem ki tu
{
	int n= strlen(s);
	int i, dem=0;
	for(i=0;i<n; i++){
		if ((s[i] >= 'A'&& s[i] <= 'Z') || (s[i] >='a' && s[i]<= 'z'))
	dem=dem+1;
	}
	
	return dem;
}
int countNumber(char s[]) // dem so 
{
	int n= strlen(s);
	int i, dem=0;
	for (i=0;i<n;i++){
		if (s[i] >= '0' && s[i] <= '9'){
			dem=dem+1;
		}
	}
	return dem;
}
int countSpecialChar(char s[])  // Ham dem so ky tu dac biet
{
	char special_chars[] = "!@#$%^&*()-+={}[]|\\:;\"'<>,.?/~`";
	int n = strlen(s);
	int i, dem = 0;
	for (i = 0; i < n; i++)
if (strchr(special_chars, s[i])) {
		dem = dem + 1;
}
return dem;
}
void reverse_string(char s[]) // Ham dao nguoc chuoi
{
   int n = strlen(s);
   char temp;

   for (int i = 0; i < n/2; i++) {
       temp = s[i];
       s[i] = s[n-i-1];
       s[n-i-1] = temp;
   }
}



/* void printReverseString(char s[]) //Ham dao nguoc(In theo thu tu nguoc)
 {
    int n= strlen(s);
    int i;
    for(i=n-1;i>=0;i--){
    	
   	printf("%c",s[i]);
	}
}*/
int main(){
	char s[100];
	gets(s);
	printf("So luong chu cai = %d\n", countAlphabet(s));
	printf("So luong chu so = %d\n", countNumber(s));
	
	printf("So luong ki tu dac biet = %d\n",countSpecialChar(s));
	upperString(s);
	printf("Sau khi viet hoa: %s\n", s);
	//printReverseString(s);
	reverse_string(s);
	printf("Chuoi dao nguoc: %s",s);
	return 0;
}
