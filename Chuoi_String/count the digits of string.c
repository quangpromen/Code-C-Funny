#include <stdio.h>
#include <ctype.h>
int cout_the_numStr(char str[]){
	int i,digit_count=0;
    for ( i = 0; str[i] != '\0'; i++) { // Duyet tung ki tu trong chuoi
        if (isdigit(str[i])) { // Kiem tra xem ki tu co phai la chu so hay khong
            digit_count++; // Neu dung, tang bien dem len 1
        }
    }
    return digit_count;
}
int main() {
    char str[100];
    int digit_count1;

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin); // Nhap chuoi bang fgets

digit_count1= cout_the_numStr(str);
    printf("So luong chu so trong chuoi la: %d\n", digit_count1);

    return 0;
}

