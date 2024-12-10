#include<stdio.h>
	// Ham tim so lon nhat cua mang
int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[100], size;
    // nhap so luong phan tu
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &size);
    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Goi ham tim so lon nhat
    int max = timSoLonNhat(arr, size);
    // In ra ket qua
    printf("So lon nhat trong mang la: %d\n", max);
	return 0;
}
