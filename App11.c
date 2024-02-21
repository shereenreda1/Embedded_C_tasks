#include "stdio.h"

void seperate_zeros_ones(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            sum++;
        }
    }

    for(int i=0;i<size;i++){
        if(i<sum){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
}

int main(void){
    int arr[]={1,0,1,0,0,1,0,1,1};
    seperate_zeros_ones(arr,9);
    for(int i=0;i<9;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}
