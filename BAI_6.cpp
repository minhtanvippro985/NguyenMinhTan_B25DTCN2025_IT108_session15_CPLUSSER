#include <stdio.h>

void swapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arryy[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arryy[j] > arryy[j + 1]) {
                swapper(&arryy[j], &arryy[j + 1]); // truyen dchi
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
    printf("Nhap so luong phan tu: ");
    scanf("%d", &size);

    int arrtemplate[size];
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu [%d]: ", i);
        scanf("%d", &arrtemplate[i]); 
    }

    printArray(arrtemplate, size);

    bubbleSort(arrtemplate, size);

    printf("mang sau khi bubble sorrt \n");
    printArray(arrtemplate, size);

    return 0;
}
