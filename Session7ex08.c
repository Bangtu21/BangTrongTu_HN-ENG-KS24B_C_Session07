#include<stdio.h>
int main(){
	//yeu cau nguoi dung nhap so hang va cot
	int m,n; //m la hang, n la cot
	printf("Moi ban nhap so hang va cot: ");
	scanf("%d %d", &m, &n);
	//khai bao mang 2 chieu
	int arr[m][n];
	//yeu cau nguoi dung nhap tung phan tu
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap phan tu trong hang thu %d va cot thu %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	//sau khi nhap xong roi thi in ra
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
}
