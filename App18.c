#include "stdio.h"
#include "string.h"

void are_they_anagram(char* str1,char* str2,int size1,int size2){
    if(size1 != size2){
        printf("They are not anagram");
    }
    else{
        int count=0;
        for(int i=0;i<size1;i++){
            for(int j=0;j<size1;j++){
                if(str1[i]==str2[j]){
                    count++;
                }
            }
        }
        if(count==size1){
            printf("They are anagram");
        }
    }
}

int main(){
    char* str1="spare";
    char* str2="pears";
    int len1= strlen(str1);
    int len2= strlen(str2);
    are_they_anagram(str1,str2,len1,len2);
    return 0;
}
