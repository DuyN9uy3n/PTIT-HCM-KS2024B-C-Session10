#include <stdio.h>  

int main() {  
    int n, i, j, key;  
 
    printf("nhap so luong: ");  
    scanf("%d", &n);  

    int arr[n];
 
    printf("nhap cac phan tu:\n");  
    for (i = 0; i < n; i++) {  
        printf("Phan tu %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  

    for (i = 1; i < n; i++) {  
        key = arr[i];
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) {  
            arr[j + 1] = arr[j];
            j--;  
        }  
        arr[j + 1] = key; 
    }  
 
    printf("tang dan:\n");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}