#include<stdio.h>

int  totalarraysum( int arraytemplate[] , int size ){
	int i ;
//	int arraytemplate[size];
	int sum;
	for (i = 0 ; i < size ; i++){
		sum += arraytemplate[i];
	} 
	return sum;
}


void printmang(int arraytemp[] , int size  ){
	int i;
	printf("\n");
	for (i = 0 ; i < size ; i++){
		printf("-------- array %d = %d ------------",i , arraytemp[i] );
		printf("\n");
	} 
	
}




int main(){
	int size;
	int i;
	printf("nhap size cua ban : ");
	scanf("%d",&size);
	int arraytemplate[size];
	for( i = 0 ; i< size ; i++ ){
		printf("nhap phan tu thu %d = " , i );
		scanf("%d",&arraytemplate[i] );
	}
	int summyes = totalarraysum(arraytemplate , size );
	printf("tong trong mang la %d \n",summyes );
	printmang(arraytemplate , size);
	
}