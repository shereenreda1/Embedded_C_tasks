#include <stdio.h>

void seperate_odd_even (int *arr,int size, int* odd_arr, int* even_arr){
    int even_index=0;
    int odd_index=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0){
            even_arr[even_index++]= arr[i];
        }
        else{
            odd_arr[odd_index++]= arr[i];
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int even[3],odd[3];
    seperate_odd_even (arr,6,odd, even);
    for(int i=0; i<3;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0; i<3;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}
