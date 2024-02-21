#include <stdio.h>


int str_length(char * str){
     int i=0;
     int counter =0;
     while(str[i] != '\0'){
         counter++;
         i++;
     }
     return counter;
}

int main() {
    // Write C code here
    char str[]={'s','d','e','i','\0'};
    printf("length= %d \n",str_length(str));


    return 0;
}
