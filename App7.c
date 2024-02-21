#include <stdio.h>

int multipleof_5 (int n){
    if(n%5 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    (multipleof_5(15))? printf("yes, it multiple of 5") : printf("no, it is not multiple of 5");
    return 0;
}
