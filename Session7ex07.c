#include <stdio.h>
int main(){
	int n, number[n];
	printf("Ban hay nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for (int i = 0; i<n; i++){
		printf("Nhap phan tu thu %d vao mang: ", i+1);
		scanf("%d", &number[i]);
		while(number[i]%2==0){
			printf("");
			scanf("%d", &number[i]);
		}
	}
}
