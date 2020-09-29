#include<stdio.h>
int switch2(){
    int number=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    switch(number){
    case 10:
        printf("Number is equala to 10");
    break;
    case 50:
        printf("Number is equala to 50");
    break;
    case 100:
        printf("Number is equala to 100");
    break;

    default:
        printf("number is not equala to 10,50 or 100 ");
}
}
