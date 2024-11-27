#include <stdio.h>
int main(){
	int number[5];
	for(int i = 0; i<sizeof(number)/sizeof(int); i++){
		printf("Phan tu thu %d trong mang la: ", i+1);
		scanf("%d",&number[i]);
	}
	for(int i = 0; i<sizeof(number)/sizeof(int); i++){
		printf("number[%d]=%d\n",i, number[i]);
	}
}
