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
int duplicatesREMOVAL(int arr[], int size) {
    if (size == 0) return 0;
    int newersize = 0; 

    for (int i = 0; i < size; i++) {
        int duplicated = 0;
        for (int j = 0; j < newersize; j++) {
            if (arr[i] == arr[j]) {
                duplicated = 1;
                break;
            }
        }

        if (!duplicated) {
            arr[newersize] = arr[i];
            newersize++;
        }
    }

    return newersize; // tra ve
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
    
    int newsize = duplicatesREMOVAL(arrtemplate, size);
    //bubbleSort(arrtemplate, size);

    printf("mang sau khi xoa trung lap \n");
    duplicatesREMOVAL(arrtemplate , size);
    printArray(arrtemplate, newsize);

    return 0;
}
