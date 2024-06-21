#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Viethoacachuoi(char *str) // Viet hoa ca chuoi ( Khong xoa khoang trang)
{
    int i, j;
for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100];

    printf("Nhap mot chuoi: ");
    fgets(str, 100, stdin); 

   Viethoacachuoi(str);

    printf("Chuoi sau khi xoa khoang trang va viet hoa: %s", str);

    return 0;
}

