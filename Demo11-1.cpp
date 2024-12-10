#include<stdio.h>
// Hàm tính tong
int tinhTong(int a, int b) {
    return a + b;
    }
int main(){
	//Khai bao bien
	int numb1, numb2, sum;
    // Nhap 2 so
    printf("Nhap so thu nhat: ");
    scanf("%d", &numb1);
    printf("Nhap so thu hai: ");
    scanf("%d", &numb2);
    //Tinh tong
    sum = tinhTong(numb1, numb2);
    // In ket qua
    printf("Tong cua %d va %d la: %d\n", numb1, numb2, sum);
	return 0;
}
