#include <stdio.h>
int main(){
    int mang[5]= {2, 1, 5, 4, 3};
    int searchValue = 2;
    int start = 0;
    int end = sizeof(mang)/sizeof(mang[0]);
    int mid, bienNho;
    for(int i = 0; i < end; i++){
        for(int j = 0; j < end - i - 1; j++){
            if(mang[j] > mang[j+1]){
                bienNho = mang[j];
                mang[j] = mang[j+1];
                mang[j+1] = bienNho;
            }
        }
    }
    while(start <= end){
        mid = (start + end)/2;
        if(searchValue == mang[mid]){
            printf("vi tri phan tu %d o vi tri %d cua mang", searchValue, mid);
            return 0;
        } else if (mang[mid] < searchValue){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    printf("gia tri %d khong co trong mang", searchValue);
    return 0;
}