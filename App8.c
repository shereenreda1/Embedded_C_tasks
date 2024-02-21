#include <stdio.h>


int main(){
    int arr1[3][3],arr2[3][3];
    printf("enter elements of arr1");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements of arr2");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    int flag=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr1[i][j] != arr2[i][j]){
                flag =0;
            }
        }
    }
    flag? printf("arr1 equals arr2"): printf("arr1 is not equal arr2");
    return 0;
}
