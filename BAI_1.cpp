#include<stdio.h>
#include<math.h>


int negative (int a , int b){
	int giatricu = a - b;
	return giatricu;
}
int negative2 (int a , int b){
	return abs(a - b);
}

int multiply (int soa , int sob){
	int nhanvao = soa * sob;
	return nhanvao;
}

int main(){
	int firstnumb , secondnumb;
	printf("nhap so a : ");
	scanf("%d",&firstnumb );
	printf("\nnhap so b : ");
	scanf("%d" ,&secondnumb);
	int giatricu = negative(firstnumb ,secondnumb);
	printf("hieu la %d \n ", giatricu);
	printf("su chenh lech giua %d va %d la %d",firstnumb , secondnumb , negative2(firstnumb ,secondnumb));
	
}
























