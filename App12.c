#include "stdio.h"
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void rearrange_array(int* arr,int size){
    bubbleSort(arr,size);
    for(int i=0,j=size-1;i<=(size/2)&&j>(size/2);i++,j--){
        printf(" %d %d",arr[i],arr[j]);
    }
    printf(" %d",arr[size/2]);

}

int main(){
    int arr []={5,8,1,4,2,9,3,7,6};
    int len= sizeof(arr)/sizeof(int);
    rearrange_array(arr,len);
    return 0;
}
