#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10 
// Ham tao ma tran
void taoMaTran(int maTran[MAX_ROWS][MAX_COLS], int hang, int cot) {
    printf("Nhap gia tri cho ma tran (%d x %d):\n", hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}
// Ham in ma tran
void inMaTran(int maTran[MAX_ROWS][MAX_COLS], int hang, int cot) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int maTran[MAX_ROWS][MAX_COLS];
    int hang, cot;
    // Nhap so hang va cot
    printf("Nhap so hang cua ma tran (toi da %d): ", MAX_ROWS);
    scanf("%d", &hang);
    printf("Nhap so cot cua ma tran (toi da %d): ", MAX_COLS);
    scanf("%d", &cot);
    // Kiem tra kich thuoc
    if (hang <= 0 || hang > MAX_ROWS || cot <= 0 || cot > MAX_COLS) {
        printf("Kich thuoc ma tran khong hop le! Vui long nhap so hang va so cot tu 1 den %d.\n", MAX_ROWS);
        return 1;
    }
    // Goi ham va in ma tran
    taoMaTran(maTran, hang, cot);
    inMaTran(maTran, hang, cot);
    return 0;
}
