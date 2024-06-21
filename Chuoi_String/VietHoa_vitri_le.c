#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100


void uppercase_odd(char str[]) {
	int i;
    int len = strlen(str);
    for (i = 1; i < len; i += 2) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[MAX_LENGTH+1];
    printf("Enter a string (max length %d): ", MAX_LENGTH);
    fgets(str, sizeof(str), stdin);

   

    uppercase_odd(str);
    printf("Characters at odd positions: %s\n", str);

    return 0;
}





