#include <stdio.h>
#include <string.h>
typedef struct{
    int ID;
    int model;
    float rentPerDay;
}car;



int main() {
    car cars[3];
    int days;
    for(int i=0; i<3;i++){
        scanf("%d",&cars[i].ID);
        scanf("%d",&cars[i].model);
        scanf("%f",&cars[i].rentPerDay);
    }
    printf("Enter the number of days : \n");
    scanf("%d",&days);
    for(int i=0; i<3;i++){
        printf("cost of car[%d] = %f\n",i, (cars[i].rentPerDay)*days );
    }

    return 0;
}
