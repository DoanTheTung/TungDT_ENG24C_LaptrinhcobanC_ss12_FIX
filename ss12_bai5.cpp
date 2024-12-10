#include<stdio.h>
// Hàm ki?m tra s? hoàn h?o
int kiemTraSoHoanHao(int n) {
    if (n <= 0) return 0; 
    int tongUoc = 0;
    for (int i = 1; i <= n / 2; i++) { 
        if (n % i == 0) {
            tongUoc += i; 
        }
    }
    return tongUoc == n;
}
int main() {
    int num1, num2;
    // Nhap2 so nguyen tu ban phhim
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    // Kiem tra và in ket qua cho so thu nhat
    if (kiemTraSoHoanHao(num1)) {
        printf("%d la so hoan hao.\n", num1);
    } else {
        printf("%d khong phai la so hoan hao.\n", num1);
    }
    // Kiem tra va in ket qua so thu hai
    if (kiemTraSoHoanHao(num2)) {
        printf("%d la so hoan hao.\n", num2);
    } else {
        printf("%d khong phai la so hoan hao.\n", num2);
    }
	return 0;
}
