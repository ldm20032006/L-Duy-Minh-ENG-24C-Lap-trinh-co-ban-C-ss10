#include<stdio.h>
int main(){
	int arr[3][3] ={{3,1,2},{7,5,9},{6,8,4}};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3 - i -1; j++){
			if(arr[i][j] > arr[i][j+1]){
				int temp = arr[i][j];
				arr[i][j] = arr[i][j+1];
				arr[i][j+1] = temp;
			}
		}
	}
	printf("in cac phan tu da sap xep theo ma tran:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
