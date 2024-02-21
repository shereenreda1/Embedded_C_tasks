#include <stdio.h>

void print_unique(int * arr,int size){
    int * u_arr[size];
    int index=0;
    int count =0;
    for(int i=0;i<size ;i++){
            count =0;
        for(int j=0 ;j<size ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            printf("%d  ",arr[i]);
        }
    }

}

int main(){
    int arr[6]={1,2,3,4,5,1};
    print_unique(arr,6);
    return 0;

}
