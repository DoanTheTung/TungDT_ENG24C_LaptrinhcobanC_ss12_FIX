#include <stdio.h>
// Ham tim uoc chung lon nhat (UCLN)
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a > 0 ? a : -a;
}
int main() {
    int num1, num2;
    // KHai bao va gan gia tri cho 2 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    // Tim UCLN cua hai so
    int ucln = timUCLN(num1, num2);
    // In ket qua
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, ucln);
    return 0;
}
