#include <stdio.h>  

int main() {  
    int n, i, j, temp;  
 
    printf("nhap so luong: ");  
    scanf("%d", &n);  

    int arr[n]; 
  
    printf("nhap cac phan tu:\n");  
    for (i = 0; i < n; i++) {  
        printf("Phan tu %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  

    for (i = 0; i < n - 1; i++) {  
        for (j = 0; j < n - 1 - i; j++) {  
            if (arr[j] > arr[j + 1]) {  
                temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }  
        }  
    }  
    printf("tang dan:\n");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}