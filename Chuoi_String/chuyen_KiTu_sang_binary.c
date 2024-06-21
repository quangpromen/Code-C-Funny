#include <stdio.h>
#include <string.h>

void print_binary_string(char* string) {
    int i;
    for(i=0;i<8*strlen(string);i++)
        printf("%d",0 != (string[i/8] & 1 << (~i&7)));
    printf("\n");
}

int main() {
    char string[100];
    gets(string);
    print_binary_string(string);
    return 0;
}

