#include "stdio.h"

void reverse_digits(int num){
    while(num != 0){
        printf("%d",num%10);
        num=num/10;
    }
}

int main(){
    int num=123;
    reverse_digits(num);
    return 0;
}
