#include "stdio.h"

void update_array(int *arr,int size,int* arr2){

    arr2[0]=arr[0]*arr[1];
    for(int i=1;i<size-1;i++){
        arr2[i]=arr[i-1]*arr[i+1];
    }
    arr2[size-1]=arr[size-2]*arr[size-1];

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int len= sizeof(arr)/sizeof(int);
    int arr2[len];
    update_array(arr,len,arr2);
    for(int i=0;i<len;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
