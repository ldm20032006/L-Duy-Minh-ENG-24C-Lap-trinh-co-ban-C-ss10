#include<stdio.h>
int main(){
	int numbers[5] = {1, 2, 3, 4, 5}, index = 0, n, flag = 0;
	printf("nhap phan tu muon tim kiem: ");
	scanf("%d", &n);
	for(int i = 0; i < 5; i++){
		if(n == numbers[i]){
			flag = 1;
			index = i;
		}
	}
	if(flag == 1){
		printf("phan tu nam o vi tri: %d", index);
	}
	else{
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
}
