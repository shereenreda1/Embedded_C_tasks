#include "stdio.h"

int max_difference(int *arr,int size){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
    return max-min;
}

int main(void){
    int arr[] ={7,9,5,6,13,2};
    int len= sizeof(arr)/sizeof(int);
    printf("%d",max_difference(arr,len));
    return 0;
}
