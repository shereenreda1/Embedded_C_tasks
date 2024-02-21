#include "stdio.h"

void remove_duplicates(int*arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
}

int main(){
    int arr[]={1,1,2,3,4,4,5,6,6,6};
    int len= sizeof(arr)/sizeof(int);
    remove_duplicates(arr,len);
    for(int i=0;i<len;i++){
        if(arr[i]!= -1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
