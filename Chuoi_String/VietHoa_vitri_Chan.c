#include <stdio.h>
#include <ctype.h>
#include<string.h>
#define MAX_LENGTH 100
void Viethoa_chan(char s[]){
	int i;
	for(i=0; i< strlen(s);i++){
		if(i%2==0){
			s[i]=toupper(s[i]);
		}
	}
	printf("String: %s\n",s);
}
int main() {
// Declare a character array to store the string
char s[MAX_LENGTH];
// Prompt the user to enter the string
printf("Enter a string (max %d characters): ", MAX_LENGTH);
// Read the string from the keyboard (STDIN)
 fgets(s, MAX_LENGTH, stdin);
Viethoa_chan(s);

return 0;
}
