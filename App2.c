#include <stdio.h>

char vowels []= {'a','e','o','u','i','\0'};
 int count_vowels(char *str){
     int counter =0;
     int length = str_length(str);
     for(int i=0 ; i<length ; i++){
         for(int j= 0 ;j<str_length(vowels) ; j++){
             if(str[i] == vowels[j]){
                 counter++;
             }
         }
     }
     return counter;
 }
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
    printf("number of vowels = %d \n",count_vowels(str));


    return 0;
}
