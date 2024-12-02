#include <stdio.h>
int main(){
    int mang[5] = {1,1,3,2,4};
    int mangViTri[5];
    int searchValue = 1;
    int dem = 0; 
    for(int i = 0; i < 5; i++){
        if(mang[i] == searchValue){
            mangViTri[dem] = i;
            dem++;
        }
    }
    if(dem == 0){
        printf("phan tu %d khong co trong mang", searchValue);
    } else {
        printf("vi tri phan tu %d trong mang la: ", searchValue);
        for(int i = 0; i < dem; i++){
            printf("%d ", mangViTri[i]);
        }
    }
    return 0;
}