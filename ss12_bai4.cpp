#include<stdio.h>
#include <stdbool.h>
// Ham kiem tra so nguyen to
bool kiemTraSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num1, num2;
    // Nhap hai so nguyen to tu ban phim
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    // kiem tra va in ra kêt qua cho so thu nhat
    if (kiemTraSoNguyenTo(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }
    //kiem tra va in ra ket qua cho so thu 2
    if (kiemTraSoNguyenTo(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }
	return 0;
}
