#include<stdio.h>
	//Ham in cac phan tu trong mang
void inMang(int arr[], int size) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100], size;
    // Nhap so luong phan tu trong mang
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &size);
    // Nhap cac phan tu trong mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Goi ham de in mang
    inMang(arr, size);
	return 0;
}
