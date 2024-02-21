#include "stdio.h"

int row_with_max_ones(int arr[][5],int rows,int cols){
    int sum,max=0,idx;
    for(int i=0;i<rows;i++){
        sum=0;
        for(int j=0;j<cols;j++){
            if(arr[i][j]==1){
                sum++;
                //printf("%d",sum);
            }
        }
        if(sum>max){
            max=sum;
            idx=i;
        }
    }
    return idx;
}

int main(void){
    int arr[5][5]={{0,1,0,1,1},{1,1,1,1,1},{1,0,0,1,0},{0,0,0,0,0},{1,0,0,0,1}};
    printf("%d",row_with_max_ones(arr,5,5));
    return 0;
}
