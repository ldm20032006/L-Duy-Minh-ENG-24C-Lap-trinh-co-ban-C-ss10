#include<stdio.h>
int main(){
	int arr[5] = {4,6,9,1,7};
	for(int i = 0; i < 5; i++){
		int minIndex = i;
		for(int j = i + 1; j < 5; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex != i){
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;	
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
