#include<stdio.h>
int main(){
	int number[5]={1,2,3,4,5};
	int min=number[0];
	int max=number[0];
	for (int i =0; i<sizeof(number)/sizeof(int); i++){
		if(number[i]>max){
			max=number[i];
		}else if(number[i]<min){
			min=number[i];
		}
	}
	printf("Gia tri lon nhat cu mang la %d\n", max);
	printf("Gia tri nho nhat cua mang la %d\n", min);
}
