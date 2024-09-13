#include <stdio.h>
int main(){
    int a=3; //a stores the value 3
    int *p; // now p is a integer pointer
    p=&a; // p stores the address of a
    printf("address of a is:%d\n",p);
    printf("value in a is:%d",*p);
}