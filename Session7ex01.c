#include<stdio.h>
int main(){
	int number[5]={1,2,3,4,5};
	for (int i = 0; i<sizeof(number)/sizeof(int); i++){
		printf("number [%d]=%d\n",i,number[i]);
	}
	printf("Do dai cua mang la %d", sizeof(number)/sizeof(int));
}
