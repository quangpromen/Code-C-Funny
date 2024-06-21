#include<iostream>
#include<math.h>
using namespace std;
int check(int n) // kiem tra so nguyen to
{
 if (n <= 1) return 0;
 for (int i = 2; i <= sqrt(n); i++)
 if (n % i == 0)
 return 0;
 return 1;
}
int dem(int a[], int n) // dem so nguyen to trong mang
{
 int count = 0;
 for (int i = 0; i < n; i++) {
 if (check(a[i]) == true)
 count++;
 }
 return count;
}
void inputArray(int a[], int n) //Nhap mang
{
	int i;
printf("-----Nhap mang-----\n");
for ( i = 0; i < n; i++) {
printf("Nhap phan tu a[%d]: ", i);
scanf("%d", &a[i]);
}
}
int main() {
    int a[100];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
   inputArray(a, n);
    printf("So luong cac so nguyen to la: %d\n", dem(a, n));
    return 0;
}
