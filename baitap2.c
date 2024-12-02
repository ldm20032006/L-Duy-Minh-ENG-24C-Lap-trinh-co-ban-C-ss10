#include<stdio.h>
int main(){
	int numbers[5] = {5,4,3,2,1}, temp;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4 - i -1; j++){
			if(numbers[i] < numbers[i+1]){
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
