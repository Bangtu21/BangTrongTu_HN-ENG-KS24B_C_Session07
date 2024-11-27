#include<stdio.h>
int main(){
	int number[5]={1,2,3,4,5};
	for(int i = 0; i<sizeof(number)/sizeof(int); i++){
		if(number[i]%2==0){
			number[i]=number[i]+3;
			printf("number[%d]=%d\n", i, number[i]);
		}else{
			number[i]=number[i]+2;
			printf("number[%d]=%d\n", i, number[i]);
		}
	}
}
