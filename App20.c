#include "stdio.h"

int length_after_removal(int ele,int* arr,int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=ele){
            length++;
        }
    }
    return length;
}

int main(){
    int arr[]={1,1,2,3,4,4,5,6,6,6};
    int len= sizeof(arr)/sizeof(int);
    printf("%d",length_after_removal(4,arr,len));
    return 0;
}
