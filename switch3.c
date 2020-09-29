#include<stdio.h>
int switch3 (){
    int x=10,y=5;
    switch(x>y && x+y>0){
    case 1:
        printf("hi");
        break;
    case 0:
        printf("Bye");
    break;
    default:
        printf("Hello bye");
    }
}
