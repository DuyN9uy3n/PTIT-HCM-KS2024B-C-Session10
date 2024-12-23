#include <stdio.h>  

void sortSecondaryDiagonal(int arr[100][100], int n) {  
    int i, j, temp;  


//lặp qua các phần tử của đường chéo phụ.
    for (i = 0; i < n - 1; i++) {  
    //so sánh các phần tử theo thứ tự để sắp xếp chúng.
        for (j = 0; j < n - 1 - i; j++) {  
            if (arr[j][n - 1 - j] < arr[j + 1][n - 1 - (j + 1)]) {    
                temp = arr[j][n - 1 - j];  
                arr[j][n - 1 - j] = arr[j + 1][n - 1 - (j + 1)];  
                arr[j + 1][n - 1 - (j + 1)] = temp;  
            }  
        }  
    }  
}  

int main() {  
    int row, col, i, j;  

    printf("Nhap so dong (row): ");  
    scanf("%d", &row);  
    printf("Nhap so cot (col): ");  
    scanf("%d", &col);  

    if (row != col) {  
        printf("Ma tran phai la ma tran vuong (row phai bang col).\n");  
        return 1;
    }  

    int arr[100][100]; 

    printf("Nhap vao cac phan tu cua mang:\n");  
    for (i = 0; i < row; i++) {  
        for (j = 0; j < col; j++) {  
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);  
            scanf("%d", &arr[i][j]);  
        }  
    }  
//goi ham sx
    sortSecondaryDiagonal(arr, row);  
    
    printf("Ma tran sau khi sap xep duong cheo phu theo thu tu giam dan:\n");  
    for (i = 0; i < row; i++) {  
        for (j = 0; j < col; j++) {  
            printf("%d ", arr[i][j]);  
        }  
        printf("\n");  
    }  

    return 0;  
}