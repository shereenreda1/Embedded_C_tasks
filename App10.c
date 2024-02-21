#include "stdio.h"
void search(int ele,int arr[][4],int rows,int cols, int* row,int *col){
    *row=-1;
    *col=-1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==ele){
                *row=i;
                *col=j;
            }
        }
    }

}

int main(void){
    int arr[][4]= {{15,23,31,39},{18,26,36,43},{25,28,37,48},{30,34,39,50}};
    int row,col;
    search(37,arr,4,4,&row,&col);
    printf("%d,%d",row,col);
    return 0;
}
