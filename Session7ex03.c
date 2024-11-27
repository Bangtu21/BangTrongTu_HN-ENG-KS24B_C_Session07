#include <stdio.h>
int main(){
	int number[5]={1,2,3,4,5};
	int count=0;
	for(int i = 0; i<sizeof(number)/sizeof(int); i++){
		if(number[i]%2==0){
			printf("number[%d]=%d\n", i , number[i]);
			count++;
		}
	}
	if(count==0){
		printf("Mang khong chua so chan");
	}
}
