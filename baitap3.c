#include<stdio.h>
int main(){
	int numbers[5] = {4,5,2,3,1};
	for(int i = 0; i < 5; i++){
		int key = numbers[i];
		int j = i - 1;
		while(j >=0 && numbers[i] > key){
			numbers[j+1] = numbers[j];
			j = j - 1;
		}
		numbers[j+1] = key;	
	}
	for(int i = 0; i < 5; i++){
		printf("%d", numbers[i]);
	}
	return 0;
}
