#include<stdio.h>
int main(){
	int row, col, n = 0;
	printf("nhap so hang: ");
	scanf("%d", &row);
	printf("nhap so cot: ");
	scanf("%d", &col);
	int arr[row][col], numbers[row*col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("nhap phan tu arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	n =0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			numbers[n] = arr[i][j];
			n++;
		}
	}
	for(int i = 0; i < col*row; i++){
		for(int j = 0; j < col*row - i - 1; j++){
			if(numbers[j] > numbers[j+1]){
				int temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	n =0;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			arr[j][i] = numbers[n];
			n++;
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
