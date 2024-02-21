#include "stdio.h"
#include "string.h"
void reverse_string(char* str,int len){
    for(int i =len ;i>=0;i--){
        printf("%c",str[i]);
    }
}
int main(){
    char * str= "w3resource";
    reverse_string(str,strlen(str));
    return 0;
}
