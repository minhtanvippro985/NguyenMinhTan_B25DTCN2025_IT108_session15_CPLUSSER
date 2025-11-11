#include<stdio.h>




void printarray(int arr[] , int size ){
	for (int i = 0  ; i < size ; i++){
		printf("---- array[%d] =  %d ---------- \n",i , arr[i]  );
	} 
}

void numbfrequency(int arr[], int size) {
    int i, j, dem;
    int da_dem;
    int maxValue = arr[0];
    int maxCount = 0;
    printf("\n=== TAN SUAT XUAT HIEN CUA CAC PHAN TU ===\n");

    for (i = 0; i < size; i++) {
        dem = 1;       // bắt đầu đếm từ 1 
        da_dem = 0;    

        // Kiểm tra xem phần tử arr[i] đã được đếm trước đó chưa
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                da_dem = 1; 
                break;
            }
        }
        if (da_dem == 0) {
            for (j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    dem++;
                }
            }
            printf("gia tri %d xuat hien %d lan\n", arr[i], dem);
        } 
        if(dem > maxCount){
        	maxCount = dem;
        	maxValue = arr[i];
		}   
}     printf("\n--- Gia tri xuat hien nhieu nhat la: %d xuat hien %d lan \n", maxValue, maxCount);
}
int main(){
	int size;
	int i;
	printf("nhap size cua ban : ");
	scanf("%d", &size  );
	int arraytemplate[size];

	for (i = 0 ; i < size ; i++){
		printf("nhap array thu %d =  ", i );
		scanf("%d",&arraytemplate[i] );
	} printf("\n");
	printarray(arraytemplate , size );
	numbfrequency(arraytemplate , size);
}