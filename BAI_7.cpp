#include <stdio.h>

int binary(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;  // Chia đôi

        if (arr[mid] == target) {
            return mid;             
        } 
        else if (arr[mid] < target) {
            left = mid + 1;           
        } 
        else {
            right = mid - 1;          
        }
    }
    return -1;  
}

void swapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arryy[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arryy[j] > arryy[j + 1]) {
                swapper(&arryy[j], &arryy[j + 1]); 
            }
        }
    }
}

void printArray(int arrer[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arrer[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("so luong phan tu: ");
    scanf("%d", &size);

    int targetter;
    printf("MUON TIM SO GI: ");
    scanf("%d", &targetter);

    int arrtemplate[size];
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu [%d]: ", i);
        scanf("%d", &arrtemplate[i]); 
    }

  
  //  printArray(arrtemplate, size);

  //  bubbleSort(arrtemplate, size);

    printf("Mang sau khi sap xep: ");
    printArray(arrtemplate, size);

    int result = binary(arrtemplate, size, targetter);
    if (result != -1) {
        printf("%d duoc tim thay tai vi tri %d\n", targetter, result);
    } else {
        printf("KHONG TIM THAY %d TRONG MANG\n", targetter);
    }

    return 0;
}
