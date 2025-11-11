#include<stdio.h>




int totaldigit(int numbe){
	int sum = 0 ;
	if( numbe < 0 ) numbe = -numbe;
	while ( numbe > 0 ) {
		sum += numbe % 10;
		numbe /= 10;
	}
	return sum;
}



int main(){
	int number;
	printf("nhap so: ");
	scanf("%d",&number);
	printf("tong cac chu so cua %d la %d \n ",number , totaldigit(number));
	return 0;
}