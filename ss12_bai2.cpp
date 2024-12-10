#include<stdio.h>
	// Ham tinh giai thua
long long tinhGiaiThua(int n) {
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int main() {
    int n;
    // Nhap so nuyen tu ban phim
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    // Kiem tra gia tri nhap
    if (n < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else {
        // Goi ham va in ket qua
        printf("Giai thua cua %d la: %lld\n", n, tinhGiaiThua(n));
    }
	return 0;
}
