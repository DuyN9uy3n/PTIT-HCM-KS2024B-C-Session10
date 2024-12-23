#include <stdio.h>  

int main() {  
    int n, i, element, position = -1;  

    printf("Nhap vao so luong phan tu cua mang: ");  
    scanf("%d", &n);  

    int arr[n];

    printf("Nhap vao cac phan tu cua mang:\n");  
    for (i = 0; i < n; i++) {  
        printf("Phan tu %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  

    printf("Nhap vao phan tu can tim: ");  
    scanf("%d", &element);  

    for (i = 0; i < n; i++) {  
        if (arr[i] == element) {  
            position = i;
            break;  
        }  
    }  

    if (position != -1) {  
        printf("Phan tu %d ton tai trong mang tai vi tri %d.\n", element, position);  
    } else {  
        printf("Phan tu %d khong ton tai trong mang.\n", element);  
    }  

    return 0;  
}