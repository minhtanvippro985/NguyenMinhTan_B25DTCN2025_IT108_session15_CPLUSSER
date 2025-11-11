#include<stdio.h>

int reversal(int number){
 int rev = 0;
    int sign = 1;
    if (number < 0) {
        sign = -1;
        number = -number;
    }

    while (number > 0) {
        int digit = number % 10;     
        rev = rev * 10 + digit;  
        number /= 10;              
    }

    return rev * sign; 

}


int main(){
	int numberinput;
	printf("nhap mot so : ");
	scanf("%d",&numberinput);
	
	int ketqua = reversal(numberinput);
	printf("so dao nguoc la %d", ketqua );
}

